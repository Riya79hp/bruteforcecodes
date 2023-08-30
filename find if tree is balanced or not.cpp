#include<iostream>
#include<cstdlib>
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node * create(int data){
	struct Node *new_p;
	new_p=(struct Node *)malloc(sizeof(struct Node));
	new_p->data=data;
	new_p->left=NULL;
	new_p->right=NULL;
	return new_p;
}
int height(struct Node *root){
    if(root==NULL){
        return 0;
    }
    int r=height(root->left);
    int l=height(root->right);
      int h;
    if(r>l){
       h=r+1;
    }
    else{
       h=l+1;
    }
    return h;
}




int main(){

struct Node *head;
	head=(struct Node *)malloc(sizeof(struct Node));
	head->data=56;
	head->left=create(3);
	head->left->left=create(77);


    	if(height(head->left)-height(head->right)>=1 || height(head->left)-height(head->right)<=1){
		cout<<"unbalanced";
	}
	else{
		cout<<"balanced";
	}

    
}
	
