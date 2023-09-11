#include<iostream>
#include<vector>
using namespace std;
int f(int *arr,int i,int k){
if(i==0){
  return(k%arr[0]==0);
}
  int nottake=f(arr,i-1,k);
  int take=0;
  if(arr[i]<=k){
    take=f(arr,i,k-arr[i]);
  }
  return take+nottake;
  
}
int makecoinchange(int *arr;int n,int k){
  return f(arr,n-1,k);}
int main(){
  int *p;
  int n,k;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>*(p+i);
  }
cin>>k;
int y=  makecoinchange(p;n,k);
  cout<<y;

  
}
