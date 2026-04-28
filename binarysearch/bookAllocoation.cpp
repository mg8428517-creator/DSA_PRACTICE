#include <iostream>
using namespace std;
// check if it is possible to allocate the book to m students with mid as the maximum number of pages
bool Ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m){
                return false;
            }
            pagesum = arr[i];
        }
     }
    return true;
}
// function to allocate the book to m students such that the maximum number of pages allocated to a student is minimum
int bookallocate(int arr[], int n, int m)
{
    int s=0;
    int sum=0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    int e= sum;
    int mid = (s+e)/2;
    while(s<=e){
        if(Ispossible(arr,n,m,mid)){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = (s+e)/2;
    }   
    return s;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    cout << " book allocate is :" << bookallocate(arr, n, 3);
}