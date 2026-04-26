#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int nCr(int n,int r)
{
    if(r > n || r < 0)
    {
        return 0;
    }
    else
    {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
}
int main()
{
    int n,r;
    cout<<" Enter n : ";
    cin>>n;
    cout<<" Enter r : ";
    cin>>r;
    cout<<" factorial of n is : "<<factorial(n)<<endl;
    cout<<" nCr is : "<<nCr(n,r)<<endl;
    cout<<" nCr is : "<<nCr(5,2)<<endl;

    cout<<" nCr is : "<<nCr(8,2)<<endl;
}