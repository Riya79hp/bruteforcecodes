#include<iostream>
#include <climits>
#include<string>
using namespace std;


class Solution {
public:


    int bestClosingTime(string &customers) {
              string old=customers;
        int length=0;
        int no=0;
        int k;
        int flag=0;
        int max=INT_MAX;
        int min_index=0;
        for(int u=0;customers[u]!=NULL;u++){
            length++;
        }
        
		
        for(int i=0;i<=length;i++){
           no=0;
           k=i;
          int c=0;
   while(k<length){
			    customers[k] = 'N';
                k++;}
                while(c<i){
                customers[c]='Y';
                c++;}
				
            
            
             for(int j=0;j<length;j++){
            if(customers[j]!=old[j]){
                no++;
                
            }
            

        }
          if(no<max && no!=max){
                    max=no;
                    min_index=i;
                }
                customers=old;

        }

       

    return min_index;}
};

int main(){
    Solution s;
    string customers="YYNY";
	int q=s.bestClosingTime(customers);
    
    cout<<q;
    
    
    
    
    
    return 0;
}
