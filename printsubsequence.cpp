
#include <iostream>
#include<vector>
using namespace std;
 vector<int> v;
void subsequence(int arr[],int index,int n){
   
    if(index==n){
        for(auto i: v){
            cout<<i;
        }
        cout<<endl;
        return ;
    }
    v.push_back(arr[index]);
    subsequence(arr,index+1,n);
    v.pop_back();
    subsequence(arr,index+1,n);
    
}

int main()
{int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    subsequence(arr,0,n);
    

    return 0;
}
