#include <iostream>
#include<cstdlib>
using namespace std;
int k=0;
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void swapsforbst(struct TreeNode*root){
		int temp;
	if(root==NULL){
		return ;
	}
	
	
	if(root->left != NULL && root->left->data>root->data){
		 temp=root->data;
		root->data=root->left->data;
		root->left->data=temp;
		k++;
	}
	 if(root->right!=NULL && root->right->data<root->data){
	temp=root->data;
		root->data=root->right->data;
		root->right->data=temp;
		k++;
	}
	
	swapsforbst(root->left);
	swapsforbst(root->right);
	
}




int main() {

	struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
	root->data=1;
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	/*root->right->left=createNode(10);
	root->right->right=createNode(11);*/
	swapsforbst(root);
   
     cout<<k;
    

    return 0;
} 
