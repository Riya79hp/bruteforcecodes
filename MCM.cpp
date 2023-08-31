#include <iostream>
#include<climits>
#include<vector>
using namespace std; 
int f(int i,int j,vector<int> arr){
    if(i==j){
        return 0;
    }
    int mini=INT_MAX;
    int step,k;
for( k=i;k<j;k++){
    step=arr[i-1]*arr[k]*arr[j]+f(i,k,arr)+f(k+1,j,arr);
    if(step<mini){
        mini=step;
    }
}
return mini;

}
int matrixMultiplication(vector<int> &arr, int N)
{
   return  f(1,N-1,arr);
}
int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
 int x=matrixMultiplication(v,v.size());
	cout<<x;}
