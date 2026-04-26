#include<iostream>
using namespace std;
int main()
{
    int num; 
    cout<<"Enter a number : ";
    cin>>num;
   // while(1) {
    switch(num)
    {
        case 1 : 
            cout<<" first ";
            break;
        case 2 : 
            cout<<" two ";
            break;
        case 3 : 
            cout<<" three ";
            break;
        case 4 : 
            cout<<" four ";
            break;
        case 5 : 
            cout<<" five ";
            break;
        case 6 : 
            cout<<" six ";
            break;
            default :
            cout<<" invalid choice ";
            break;
    }
  //  exit(0); while loop will run infinitely if not handled
     
    

}