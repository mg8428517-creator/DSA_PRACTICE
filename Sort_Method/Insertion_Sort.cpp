#include<iostream>
using namespace std;
// insertion sort algorithm
void InsertionSort(int arr[] , int n){
    for(int i=1;i<n;i++){
        int temp= arr[i];
        int j =i-1;
        // move elements of arr[0..i-1], that are greater than temp, to one position ahead of their current position
       while(j>=0 && arr[j]>temp){
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;
    }
}
// function to print the array
void print(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
    }
 int main()
  {
    int arr[]={10,5,12,11,20,4,40};
    int n= 7;
    InsertionSort(arr, n);
   cout<<"Sorted array: ";
    print(arr, n);
    
    return 0;
}
 