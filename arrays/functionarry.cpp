#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<" printing done "<<endl;
  cout<<endl;
}
int main(){
    // declare 
  int first[15];
  // accessing an array 
  cout<<" value at 13th index is :"<<first[13]<<endl;
  // initialization of an array
  int second[5]={1,2,3,4,5};
  cout<<"value at 4th index is :"<<second[4]<<endl;

  int third[15]={1,2};
  int n =15;
    
    cout<<" printing the array :"<<endl;
    printArray(third,n);
    
    // initialization all location with zero
    int fourth[15]={0};
    int m=15;
    cout<<" printing the array :"<<endl;
  printArray(fourth,m);
    
    int fifth[15]={1};
    cout<<" printing the array :"<<endl;
    printArray(fifth,m);
    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<" size of fifth array is :"<<fifthsize<<endl;

    cout<<endl<<" everithing is zero :"<<endl;


  
}
