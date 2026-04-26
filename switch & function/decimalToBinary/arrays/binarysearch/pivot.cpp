#include<iostream>
using namespace std;

int getpivot(int arr[], int n){
int s =0, e=n-1;
while (s<e)
{
  
  int mid = (s+e)/2;
   if(arr[mid] >=  arr[0]){
    s=mid +1;

   }
   else {
     e=mid;
   }
    /* code */
}
return s;

}
int main(){
    int arr[]= {12,14,18,2,5,6};
    int n= 6;
    int pivot=getpivot(arr,n);
    cout<<" pivot is :"<<pivot;
}