#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}

int main(){
    int arr[8]={2,3,4,5,6,7,8,9};
    cout<<"Before swapping alternate elements: "<<endl;
    printArray(arr,8);
    swapAlternate(arr,8);
    cout<<"After swapping alternate elements: "<<endl;
    printArray(arr,8);

    int brr[7]={2,3,4,5,6,7,8};
    cout<<"Before swapping alternate elements: "<<endl;
    printArray(brr,7);
    swapAlternate(brr,7);
    cout<<"After swapping alternate elements: "<<endl;
    printArray(brr,7);
}   