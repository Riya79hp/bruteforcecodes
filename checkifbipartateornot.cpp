#include <iostream>
#include<cstdlib>
#include<vector>
#include<queue>
using namespace std;


struct graph{
  int data;
  struct graph *next;
};
void checkbipartate(struct graph *node[],int n){
vector<char>color(n+1,0);
vector<int> visited(n+1,0);
int i=0;
    while(i<n){
        if(visited[i]!=1){
            color[i]='R';
            visited[i]=1;
        }
        struct graph *t=node[i]->next;
        while(t!=NULL){
           if(visited[t->data]!=1){
                visited[t->data]=1;
                if(color[i]=='R'){
                color[t->data]='G';}
                else{
                	color[t->data]='R';
				}
            }
            else{
                if(color[t->data]==color[i]){
                    cout<<"false";
                    return;
                }
                
            }
            t=t->next;
        }
        i++;
   }
   cout<<"true";
   return ; 
    
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
 
  
   checkbipartate(node,n);
    
    return 0;
}
