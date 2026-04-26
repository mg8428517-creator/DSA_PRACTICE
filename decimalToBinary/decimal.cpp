#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x;
  cout<<" enter a number :";
  cin>>x;
  int ans=0;
  int i=0;
  while(x!=0){
    int bit=x & 1;
    ans=(bit*pow(10,i))+ans;
    x=x>>1;
    i++;
  } 
  cout<<" binary equivalent is :"<<ans;


}
 



 
 