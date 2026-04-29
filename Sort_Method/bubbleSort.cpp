#include<iostream>
using namespace std;
// bubble sort funtion bana rahe hain jo array ko sort karega
void bubbleSort(int arr[],int n){
    bool swapped; // ye variable check karega ki kya koi swapping hui hai ya nahi

    // outer loop jo array ke har element par iterate karega
    for(int i=0;i<n;i++){ 
        swapped = false;
        // inner loop jo adjacent elements ko compare karega
        for(int j=0;j<n-i-1;j++){ 
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]); // agar current element adjacent element se bada hai to unhe swap kar denge
                swapped = true;
            }
        }
        // agar koi swapping nahi hui to array already sorted hai
        if(swapped == false){
            break;
        }
    }

}
int main(){
    int arr[]= {10,5,7,3,8,9,1};
    int n=7;
    // bubble sort function call kar rahe hain array ko sort karne ke liye
    bubbleSort(arr,n); 
 cout<<" sorted array is : ";
 // sorted array ko print kar rahe hain
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 
}