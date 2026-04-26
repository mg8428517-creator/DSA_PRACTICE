#include<iostream>
using namespace std;
 void count(int n)
 {   if(n > 0)
   {
       count(n - 1);
       cout<<n<<" ";
   }
 }
int main()
{    int num;
    cout<<" Enter a number : ";
    cin>>num;
    count(num);
}