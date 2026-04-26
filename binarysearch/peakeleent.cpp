#include<iostream>
using namespace std;

int peakelement(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]<arr[mid + 1]){
            s= mid + 1;

        }
        else {
            e=mid;
        }
    }
    return s;

}

int main() {
    int arr[]={ 1,3,5,6,8,4,2};
    int n=6;
    int peak=peakelement(arr , n );
    cout<<" peak index :"<< peak<<endl;
    cout<<" peak element :"<<arr[peak];
    return 0;
}