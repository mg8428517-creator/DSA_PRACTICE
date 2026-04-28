#include<iostream>
using namespace std;
// check if it is possible to paint the boards with m painters with mid as the maximum time
bool Ispossible(int arr[], int n, int k, int mid){
    int paintercount =1;
    int sumofboards = 0;
    for(int i =0;i<n;i++){
        if(sumofboards + arr[i] <= mid){
            sumofboards +=arr[i];
        }
        else{
            paintercount++;
            sumofboards = arr[i];
            if(paintercount>k) {
            return false;
            }
        }
    
    }
    return true;

}
//function to check paint the boards with m painters 
int painter(int arr[],int n, int k){
    int s =0;
    int sum =0;
    for(int i=0; i<n; i++){
        sum +=arr[i];

    }
 int e=sum;
 int ans = -1;
  int mid = (s+e)/2;
  while (s<=e)
  {
    if (Ispossible(arr, n, k, mid)){
        ans = mid;
        e=mid -1;
    }
    else{
        s = mid +1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int main (){
    int arr[]= {10,20,30,40};
    int n = 4;
    int k=2;
    cout << " minimum time to paint the boards is :" << painter(arr,n,k);
}