#include<stdio.h>
#include<stdlib.h>
void begininsert();
void lastinsert();
void randominsert();
void begindelete();
void lastdelete();
void randomdelete();
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
		printf("3.randominsert\n");
		printf("4.begindelete\n");
		printf("5.lastdelete\n");
		printf("6.randomdelete\n");
		printf("7.dispaly\n");
		printf("8.exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: begininsert();
			         break;
		    case 2: lastinsert();
		             break;
		     case 3: randominsert();
		             break;
		    case 4: begindelete();
		            break;
		    case 5: lastdelete();
		            break;
		    case 6: randomdelete();
		             break;
		    case 7: display();
		            break;
		    case 8: exit(0);
		   default : printf("invalid\n");
	   }
   }
   return 0;
}
void begininsert()
{
	int data;
	struct node* ptr;
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
			ptr->next=root;
			root=ptr;
			printf("node inserted\n");
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
		printf("not possible\n");
	}
	else
	{
		    printf("enter data\n");
	        scanf("%d",&data);
			ptr->data=data;
			if(root==NULL)
			{
				
				root=ptr;
				printf("node inserted\n");
			}
			else
			{
				temp=root;
				
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			printf("node inserted\n");
		}
	}
	
}
void randominsert()
{
	int data;
	int loc;
	struct node* ptr;
	struct node* temp;
	ptr=(struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("insertion not possible\n");
	}
	else
	{
			int i;
			printf("enter data\n");
	        scanf("%d",&data);
	        ptr->data=data;
	        printf("enter position location to insert\n");
			scanf("%d",&loc);
			temp=root;
			for(i=1;i<=loc;i++)
			{
				temp=temp->next;
				if(temp==NULL)
				{
					return;
				}
			}
			ptr->next=temp->next;
			temp->next=ptr;
			printf("node inserted\n");
		}
	}

void begindelete()
{
	struct node* temp;
	if(root==NULL)
	{
		printf("no deletion\n");
	}
	else
	{
		temp=root;
		root=temp->next;
		free(temp);
		printf("node deleted\n");
	}
}
void lastdelete()
{
	struct node* temp;
	struct node* ptr1;
	if(root==NULL)
	{
		printf("no deletion\n");
	}
	else if(root->next==NULL)
	{
		root=NULL;
		free(root);
		printf("node deleted\n");
	}
	else
	{
		temp=root;
		while(temp->next!=NULL)
		{
			ptr1=temp;
			temp=temp->next;
		}
		ptr1->next=NULL;
		free(temp);
		printf("node deleted\n");
	}
}
void randomdelete()
{
	struct node *temp;
	struct node* ptr1;
	int loc;
	if(root==NULL)
	{
		printf("no deletion\n");
	}
	else
	{
		temp=root;
		int i;
		printf("enter location\n");
		scanf("%d",&loc);
		for(i=0;i<loc;i++)
		{
			ptr1=temp;
			temp=temp->next;
		}
		ptr1->next=temp->next;
		free(temp);
		printf("node deleted\n");
	}
}
void display()
{
	
	
	struct node* temp;
	temp=root;
	printf("elements in list is:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

	

		
			
		
				
			
			
			
			
				
			
			
