#include<iostream>
using namespace std;    
int binarySearch(int arr[], int n, int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=5;
    int index=binarySearch(arr,10,key);
    if(index==-1){
        cout<<"Element not found in the array."<<endl;
    }
    else{
        cout<<"Element found at index: "<<index<<endl;
    }
}