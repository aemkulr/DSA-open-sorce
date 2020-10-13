#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node * right;
};
struct node * getnode()
{
	struct node * temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void insertleft(struct node*root,int x)
{
	struct node* temp,*p;
	temp = getnode();
	temp->info =x;
	p = root;	
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		while(p->left!=NULL)
		{
			p = p->left;
		}
		p->left = temp;
	}	
}
void insertright(struct node*root,int x)
{
	struct node* temp,*p;
	temp = getnode();
	temp->info =x;
	p = root;	
	if(root==NULL)
	{
		root = temp;
	}
	else
	{
		while(p->right!=NULL)
		{
			p = p->right;
		}
		p->right = temp;
	}	
}
int searchnode(struct node*root,int x)
{
	int z,y;
	if(root==NULL)
	{
		return 0;
	}
	if(root->info==x)
	{
		return 1;
	}
	z = searchnode(root->left,x);
	y = searchnode(root->right,x);
	return (x||y);
}
int main()
{
	struct node * root;
	int i,x,y;
	root = getnode();	
	while(1)
	{
		printf("1) insert node to the left\n2) insert node to the right\n3) search node\n4)Exit...\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("Enter element to be inserted\n");
				   scanf("%d",&x);
				   insertleft(root,x);break;
			case 2:printf("Enter element to be inserted\n");
					scanf("%d",&x);
					insertright(root,x);break;
			case 3: printf("Enter element to be searched\n");
					scanf("%d",&x);
					y = searchnode(root,x);
					if(y==1)
					{
						printf("%d found\n",x);
					}
					else if(y==0)
					{
						printf("%d not found\n",x);
					}break;
			case 4: exit(0);
		}
	}
	return 0;
}
