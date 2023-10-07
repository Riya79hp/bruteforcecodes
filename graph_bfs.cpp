#include <iostream>
#include<cstdlib>
#include<vector>
#include<queue>
using namespace std;
struct graph{
  int data;
  struct graph *next;
};
void BFS(struct graph *node[],int n,int index){
   queue<int>q;
    vector<int>v(n+1,0);
   int i=0;
   int k=0;
   int r=index;
   q.push(node[index]->data);
   v[index]=1;
        while(r<n){
        struct graph *t=node[r]->next;
        
            while(t!=NULL ){
            if(v[t->data]!=1){
            q.push(t->data);
            v[t->data]=1;
            t=t->next;}
            else{
            	t=t->next;
			 }
		}
            
         
        while(!q.empty()){
        	  cout << q.front() << " ";
        	  r=q.front();
            q.pop();
        }  }
		}

int main()
{ struct graph *node[100];
int n;
cin>>n;
  for(int i=0;i<n;i++){
      node[i]=(struct graph*)malloc(sizeof(struct graph));
  }
  for(int i=0;i<n;i++){
      cin>>node[i]->data;
      node[i]->next=NULL;
  }
  int i=0;
  while(i<n){
      struct graph *t=node[i];
     int k=0;
     int no;
      cout<<"No of neighbours for "<<node[i]->data<<":?";
      cin>>no;
      while(k<no){
          struct graph *new_p;
          new_p=(struct graph*)malloc(sizeof(struct graph));
          int data;
          cin>>data;
          new_p->data=data;
          new_p->next=NULL;
          t->next=new_p;
          t=new_p;
          k++;
          }
          t->next=NULL;
      i++;
  }
  int index;
  cout<<"Which index u want DFS?:";
  cin>>index;
  
     BFS(node,n,index)  ;
    return 0;
}
