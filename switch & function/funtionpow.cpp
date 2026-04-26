#include<iostream>
#include<cmath>
using namespace std;
int power(int a,int b)
{
    int result = 1;
    for(int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
int main()
{
     int a,b;
    cout<<" Enter base  number : ";
    cin>>a;
    cout<<" Enter power  : ";
    cin>>b;
    cout<<" power is : "<<power(a,b);

}