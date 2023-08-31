#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void permutation(int arr[],int n,int fi){
	int i=0;
	if(fi==n){
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
			
		}
		cout<<endl;
	}
	for(i=fi;i<n;i++){
		swap(arr[i],arr[fi]);
		permutation(arr,n,fi+1);
		swap(arr[i],arr[fi]);
	
	}
}
int main(){
	int n;
	cin>>n;
	int arr[50];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
 permutation(arr,n,0);
	return 0;
}
