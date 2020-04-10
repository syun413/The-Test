#include <stdio.h>
#include <stdlib.h>
typedef struct treenode
{
	int data;
	struct treenode *left;
	struct treenode *right;
}Tree;
Tree *insert(Tree *root,int data)
{
	Tree *a;
	if(root == NULL)
		{
			a = (Tree*)malloc(sizeof(Tree));
			a->data = data;
			a->left = NULL;
			a->right = NULL;
			return a;
		}
	else if(data > root->data)
		root->right = insert(root->right,data);
	else
		root->left = insert(root->left,data);
	return root;
}
void answer(Tree *root)
{
	if(root == NULL)
		return;
	printf(root->data);
	answer(root->left);
}
int main()
{
	int n;
	scanf("%d",&n);
	int *a = (int*)malloc(n*sizeof(int));
	Tree *root;
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
		insert(root,a[i]);
	}
	
	
	
	
	

	
	
	return 0;
}
