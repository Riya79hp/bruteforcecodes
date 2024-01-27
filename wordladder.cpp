// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<climits>
#include<set>
#include<vector>
using namespace std;
template<class T> 
class graph{
public:
map<T,vector< pair<T,int> > > mp;

void add_edge(T a, T b, int w,bool f=true){
    mp[a].push_back(make_pair(b,w));
    if(f){
        mp[b].push_back(make_pair(a,w));
    }
    
    
    
}

 void dij(T src,T des) {
map<T,int> dis;
set<pair<int,T>> st;
st.insert(make_pair(0,src));
 for (auto i : mp) {
        dis[i.first] = INT_MAX;
    }

dis[src]=0;
while(!st.empty()){
	T node;
	int d;
	
	auto p=st.begin();
	d=p->first;
	node=p->second;
	st.erase(st.begin());
	
	for(auto i : mp[node]){
		if(i.second+d<dis[i.first]){
			dis[i.first]=i.second+d;
	       st.insert(make_pair(dis[i.first],i.first));	
		}
		
	}
	
	
	
}
cout<<dis[des]+1<<endl;




}
    
    
};
int main() {
    
    graph<string> g;
    
string arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
    
}
int i,j;
for(i=0;i<n;i++){
    int err=0;
    int q=0;
    for( j=0;j<n;j++){
        q=0;
        err=0;
        while(q<4){
            if((arr[i])[q]!=(arr[j])[q]){
                err++;
            }
            q++;
            
        }
         if(err==1){
        g.add_edge(arr[i],arr[j],1);
    }
        
    }
   
    
    
    
}

string src,des;

cout<<"Enter source:"<<endl;
cin>>src;
cout<<"Enter destination:"<<endl;
cin>>des;

g.dij(src,des);

   
   
    

    return 0;
}
