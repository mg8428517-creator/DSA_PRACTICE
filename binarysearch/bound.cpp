#include <iostream>
using namespace std;
int firstoccurrence(int arr[],int n,int key) {
    int s=0 , e=n-1;
    int ans =-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}
int lastoccurrence(int arr[],int n, int key){
    int s=0, e=n-1;
    int ans= -1;
     while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
    }
    return ans;
}
   int main(){
    int arr[]= {1,2,3,4,4,4,4,5,6,7};
    int n=10;
    int key=4;
    int first=firstoccurrence(arr,n,key);
    int last=lastoccurrence(arr , n,key);
    cout<<first<<endl;
    cout<<last;
   } 

