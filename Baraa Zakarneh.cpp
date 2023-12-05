#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

unsigned long fact1(unsigned long n)
{
    unsigned long mult=1;
    for(long long i=1;i<=n;i++)
    mult=mult*i;

    return mult;
}
unsigned long fact2(unsigned long n)
{
    if(n==1)
        return 1;
    return n*fact2(n-1);
}
int main()
{


    unsigned long n;
    cin>>n;

    auto start = high_resolution_clock::now();
cout<<fact1(n)<<endl;
    auto end = high_resolution_clock::now();

    double Iterative = (duration_cast<nanoseconds>(end-start)).count();
    cout<< Iterative <<endl;

    start = high_resolution_clock::now();
    cout<<fact2(n)<<endl;
    end = high_resolution_clock::now();

    double Recursive = (duration_cast<nanoseconds>(end-start)).count();
    cout<< Recursive <<endl;

}
