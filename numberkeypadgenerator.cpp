// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<cstdio>
#include<string>
using namespace std;
void obtain_num(char a){
    int i,j;
    pair<int,vector<char>> nums[11];
    nums[0].first=2;
    nums[0].second={'A','B','C'};
     nums[1].first=3;
    nums[1].second={'D','E','F'};
     nums[2].first=4;
    nums[2].second={'G','H','I'};
     nums[3].first=5;
    nums[3].second={'J','K','L'};
     nums[4].first=6;
    nums[4].second={'M','N','O'};
     nums[5].first=7;
    nums[5].second={'P','Q','R','S'};
     nums[6].first=8;
    nums[6].second={'T','U','V'};
     nums[7].first=9;
    nums[7].second={'W','X','Y','Z'};
    for(i=0;i<8;i++){
        for(j=0;j<4;j++){
            if(nums[i].second[j]==a){
                if(j==0){
                    cout<<nums[i].first;
                }
                else if(j==1){
                    cout<<nums[i].first;
                    cout<<nums[i].first;
                }
                else  if(j==2){
                    cout<<nums[i].first;
                    cout<<nums[i].first;
                    cout<<nums[i].first;
                }
                else{
                     cout<<nums[i].first;
                    cout<<nums[i].first;
                    cout<<nums[i].first;
                    cout<<nums[i].first;
                }
            }
        }
    }
}
int main() {
    int i,j;
    int n=0;
     string a;
     cout<<"enter your string:";
     getline(cin,a);
     for(i=0;a[i]!=NULL;i++){
         n++;
     }
     cout<<n<<endl;
     
     for(i=0;i<n;i++){
         obtain_num(a[i]);
     }

    return 0;
}

