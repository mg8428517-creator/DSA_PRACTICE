#include<iostream>
using namespace std;
bool isEven(int num)
{
    if
    (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(isEven(a))
    {
        cout<<"The number is even.";
    }
    else
    {
        cout<<"The number is odd.";
    }

}