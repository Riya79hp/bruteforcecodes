#include<iostream>
using namespace std;
int gcd(int a,int b){
    int max,u,t;
    if(a<b){
        max=a;
    }
    else{
        max=b;
    }
    int maxt=0;
while(u<=max){
    t=0;
    if(a%u==0 && b%u==0){
        t=u;
    }

if(maxt<t){
    maxt=t;
}
u++;}


return maxt;
}






int main(){
    int a,b;
    cin>>a>>b;
   int x= gcd(a,b);
    cout<<"The gcd is:"<<x<<endl;
    cout<<"The lcm is:"<<(a*b)/x;
    
    
    
    
    
    
    
    
    
    return 0;
}
