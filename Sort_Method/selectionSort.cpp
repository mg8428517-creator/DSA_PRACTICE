#include<iostream>
using namespace std;
// Selection Sort algorithm implementation in C++
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i; // assume karte hain ki current position par minimum element hai
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // swap kar rahe hain minimum element ko current position ke saath

    }
    
}
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    // array ka size calculate kar rahe hain
    int n = sizeof(arr)/sizeof(arr[0]);
   
    selectionSort(arr, n); // selection sort function call kar rahe hain array ko sort karne ke liye
    cout<<"Sorted array is : ";
    // sorted array ko print kar rahe hain
    for(int i=0; i<n; i++){  
    
        cout<<arr[i]<<" ";
    }
   
    return 0;
}