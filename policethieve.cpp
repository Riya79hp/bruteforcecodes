#include<iostream>
using namespace std;
int queue[30];
int queue2[30];
int top1=0;
int top2=0;
void push1(int data){
	queue[top1]=data;
	top1++;
	
}
void push2(int data){
	queue2[top2]=data;
	top2++;
}
void pop1()
{
	top1--;
}
void pop2(){
	
	top2--;
}
bool check(int q){int i;
	for(i=0;i<top2;i++){
		if(queue2[i]==q){
			return true;
		}
	}
	return false;
}
int main(){
	int i,q;
	int s=0;
	int r=0;
	char a[20]={'P', 'T', 'P', 'T', 'T', 'P'};
	int arr[20];
	int n=6;
	int k;
	int p=0;
cin>>k;
	for(i=0;i<n;i++){
		if(a[i]=='P'){
			push1(1);
			r++;
			q=i;
			while(q<=i+k && q<n){
			if(a[q]=='T' && !check(q) ){
			push2(q);
			
			}
			q++;}
			q=i;
			
			while(q>=i-k && q>0){
				if(a[q]=='T' && !check(q)){
					push2(q);
				}
				q--;
			}
				
			}}
			i=0;
		while(top1!=0 && top2!=0){
			pop1();
			pop2();
s++;
		}

  cout<<s;
		
    return 0;
}	
	
	
	
	
	
	
	
	
	
	
	

