#include<stdio.h>
#include<stdlib.h>
void begininsert();
void lastinsert();
void begindelete();
void lastdelete();
void display();
struct node
{
	int data;
     struct node* next;
 };
 struct node* root;	
int main()
{
	int ch;
	while(1)
	{
		printf("1.begininsert\n");
		printf("2.lastinsert\n");
		printf("3.begindelete\n");
		printf("4.lastdelete\n");
		printf("5.display\n");
		printf("6.exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: begininsert();
			        break;
			case 2: lastinsert();
			        break;
		    case 3: begindelete();
		            break;
		     case 4: lastdelete();
		            break;
		     case 5: display();
		             break;
		      case 6: exit(0);
		      default: printf("invalid\n");
		  }
	  }
 }
 void begininsert()
 {
	 int data;
	 struct node* ptr;
	 struct node* temp;
	 ptr=(struct node*)malloc(sizeof(struct node));
	 if(ptr==NULL)
	 {
		 printf("no insertion\n");
	 }
	 else
	 {
		 printf("enter data\n");
		 scanf("%d",&data);
		 ptr->data=data;
		 if(root==NULL)
		 {
			 root=ptr;
			 ptr->next=root;
			 printf("inserted\n");
		 }
		 else
		 {
			 temp=root;
			 while(temp->next!=root)
			 {
				 temp=temp->next;
			 }
			 ptr->next=root;
			 temp->next=ptr;
			 root=ptr;
			 printf("inserted\n");
		 }
	 }
 }
 void lastinsert()
 {
	 int data;
	 struct node* ptr;
	 struct node* temp;
	 ptr=(struct node*)malloc(sizeof(struct node));
	 if(ptr==NULL)
	 {
		 printf("no insertion\n");
	 }
	 else
	 {
		 printf("enter data\n");
		 scanf("%d",&data);
		 ptr->data=data;
		 if(root==NULL)
		 {
			 root=ptr;
			 ptr->next=root;
			 printf("inserted\n");
		 }
		 else
		 {
			 temp=root;
			 while(temp->next!=NULL)
			 {
				 temp=temp->next;
			 }
			 temp->next=ptr;
			 ptr->next=root;
			 printf("inserted\n");
		 }
	 }
 }
 void begindelete()
 {
	 struct node* temp;
	 if(root==NULL)
	 {
		 printf("no deletion\n");
	 }
	 else if(root->next==NULL)
	 {
		 root=NULL;
		 free(root);
		 printf("deleted\n");
		 
	 }
	 else
	 {
		 temp=root;
		 while(temp->next!=NULL)
		 {
			 temp=temp->next;
		 }
		 temp->next=root->next;
		 free(root);
		 root=temp->next;
		 printf("deleted\n");
	 }
 }
void lastdelete()
{
	struct node* temp;
	struct node* ptr;
	if(root==NULL)
	{
		printf("no deletion\n");
	}
	else if(root->next==NULL)
	{
		root=NULL;
		free(root);
		printf("deleted\n");
	}
	else
	{
		temp=root;
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=temp->next;
		free(temp);
		printf("deleted\n");
	}
}
void display()
{
	struct node* temp;
	if(root==NULL)
	{
		printf("empty\n");
	}
	
	else
	{
		printf("elements are:\n");
		temp=root;
		while(temp->next!=root)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}

		
		
	 
		 
	 
 
  
