#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<" Enter 1st  number : ";
    cin>>a;
    cout<<" Enter 2nd  number : ";
    cin>>b;

    int choice ;
    cout<<" 1. additon "<<endl<<" 2.substraction "<<endl<<" 3. product "<<endl<<" 4.devide "<<endl;
    cout<<" Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1 : 
            cout<<" addition is : "<<a+b;
            break;
        case 2 : 
            cout<<" substraction is : "<<a-b;
            break;
        case 3 : 
            cout<<" product is : "<<a*b;
            break;
        case 4 : 
            if(b!=0)
            {
                cout<<" devide is : "<<a/b;
            }
            else
            {
                cout<<" devide by zero error ";
            }
            
            break;
        
        default :
        cout<<" invalid choice ";
        break;
    }
}