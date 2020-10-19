#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node* right;	
};

struct node *getnode(int x)
{
	struct node * p;
	p = (struct node *)malloc(sizeof(struct node));
	p->left=NULL;
	p->right=NULL;
	p->info = x;
	return p;
}
struct node* search(struct node* root, int key) 
{ 
    if (root == NULL || root->info == key) 
       return root; 
    if (root->info < key) 
       return search(root->right, key); 
    return search(root->left, key); 
} 


void intrav(struct node *root)
{
	if(root==NULL)
	return;
	intrav(root->left);
	printf("%d ",root->info);
	intrav(root->right);
}
struct node * insert(struct node* root,int x)
{
	if(root==NULL)
	return getnode(x);
	
	if(x<root->info)
	root->left = insert(root->left,x);
		
	else if(x>root->info)
	root->right = insert(root->right,x);
	return root;
} 

int main() 
{ 
    struct node *root = NULL; 
    root = insert(root, 50);
	int i,x;
	struct node *res;
	while(1)
	{
		printf("1) insert node\n2) search node\n3) view tree\n4) Exit...\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("Enter element to be inserted\n");
					scanf("%d",&x);
					insert(root,x);break;
			case 2:printf("Enter element to be searched\n");
					scanf("%d",&x);
					res = search(root,x);
					printf("%d found\n",res->info);break;
			case 3:intrav(root);printf("\n");break;
			case 4:exit(0);
		}
	} 
	return 0;
} 
