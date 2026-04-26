#include<iostream>
using namespace std;

int main()
{
    int arr[5]={6,8,3,9,5};
    int maxi=arr[0];
    int mini=arr[0];
    for(int i =0;i<=4;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);

        // if(maxi<arr[i]) {
        //     maxi=arr[i];
        // }
        // if(min>arr[i]) {
        //     min=arr[i];
        // }
    }
    cout<<" max is : "<<maxi<<endl;
    cout<<" min is : "<<mini<<endl;
}