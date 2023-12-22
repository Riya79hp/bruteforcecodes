#include<iostream>
#include<vector>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
	
}


int game(vector<int> y,int i,int j){
	
	if(y.size()==2){
		return max(y[0],y[1]);
		
	}
	int iu=i;
	int ju=j;
    vector<int> u(y.begin(), y.end() - 1);
    ju=ju-1;
        int fu=u.front();
        int lu=u.back();
        if(fu>lu){
            u.erase(u.begin());
           iu= iu+1;
        }
        else{
            u.pop_back();
            ju=ju-1;
        }

int iv=i;
int jv=j;
    vector<int> v(y.begin() + 1, y.end());
    iv=iv+1;
    int fv=v.front();
        int lv=v.back();
     if(fv>lv){
            v.erase(v.begin());
            iv=iv+1;
        }
        else{
            v.pop_back();
            jv=jv-1;
        }


    int u2 = y[j];
    int v2 = y[i];
    for(auto di : u){
        cout<<di<<" ";
    }
    cout<<endl;
    for(auto pu :v){
        cout<<pu<<" ";
    }
  
  cout<<endl;

    return max(u2 + game(u, iu,ju), v2 + game(v, iv, jv));
	
	
	
}








int main(){
	vector<int> y;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int w;
		cin>>w;
		y.push_back(w);
	}
	
	
cout<<	game(y,0,n-1);
	
	return 0;
	
	}
