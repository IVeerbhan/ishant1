#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	node *left; 
	node *right;

};

node *newnode(int data)
{
	node *Nnode=(node *)malloc(sizeof(node));
	Nnode->data=data;
	Nnode->left=NULL;
	Nnode->right=NULL;
	return Nnode;
}
int Search(node* root,int data) {
	if(root == NULL) {
		 return (0);
	}
	else if(root->data == data) {
		return(1);
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

node *insert(node*root,int data)
{
	if(root==NULL)
	root=newnode(data);
	else if(data <= root->data)
	{  
	  root->left=insert(root->left,data);	
	}
	else if(data > root->data)
	{
		root->right=insert(root->right,data);
	}
	return root;
}
int main()
{
	struct  node* root=NULL;
    root = insert(root,15);	
	root = insert(root,10);	
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
	int number;
	printf("enter number to be searched");
	scanf("%d",&number);
	
	if(Search(root,number) == 1) printf("FOUND\n");
	else printf("NOt Found\n");
	
	
	return 0;
	
}
