

#include<stdio.h>
#include<stdlib.h>
  
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(value)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
  
  
struct node* insert(struct node* root, int data)
{
    if (root == NULL) 
    {
		return createNode(data);
	}
    if (data < root->data)
    {   
		 root->left  = insert(root->left, data);
	}
    else if (data > root->data)
    {
        root->right = insert(root->right, data);   
	}
 
    return root;
}
void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}
void preorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}

	printf("%d\n",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d\n",root->data);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);
    printf("inorder\n");
    inorder(root);
    printf("preorder\n");
    preorder(root);
    printf("postorder is\n");
    postorder(root);
    return 0;
}
