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
	struct node* pre;
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
		printf("7.display\n");
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
		if(root==NULL)
		{
			ptr->pre=NULL;
			ptr->next=NULL;
			ptr->data=data;
			root=ptr;
			printf("node inserted\n");
		}
		else
		{
			ptr->data=data;
			ptr->pre=NULL;
			ptr->next=root;
			root->pre=ptr;
			root=ptr;
			printf("node inserted\n");
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
			ptr->next=NULL;
			ptr->pre=NULL;
			root=ptr;
		}
		else
		{
			temp=root;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->pre=temp;
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
		printf("no insertion\n");
	}
	else
	{
		    temp=root;
		    int i;
			printf("enter location\n");
			scanf("%d",&loc);
			for(i=0;i<loc;i++)
			{
				
				temp=temp->next;
				if(temp==NULL)
				{
					return;
				}
			}
			printf("enter data\n");
	      	scanf("%d",&data);
			ptr->data=data;  
            ptr->next = temp->next;  
            ptr -> pre = temp;  
            temp->next = ptr;  
            temp->next->pre=ptr;  
            printf("node inserted\n");
		}
}
void begindelete()
{
	struct node* ptr;
	
	if(root==NULL)
	{
		printf("deletion not possible\n");
	}
	else if(root->next==NULL)
	{
		root=NULL;
		free(root);
		printf("deleted\n");
	}
	else
	{
		ptr=root;
		root=root->next;
		root->pre=NULL;
		free(ptr);
		printf("deleted\n");
	}
}
void lastdelete()
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
		if(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->pre->next=NULL;
		free(temp);
		printf("deleted\n");
	}
}
void randomdelete()
{
	int data;
	struct node* temp;
	struct node* ptr;
	
		
		printf("enter data after\n");
		scanf("%d",&data);
		ptr = root;  
       while(ptr -> data != data)  
       ptr = ptr -> next;  
        if(ptr -> next == NULL)  
       {  
             printf("\nCan't delete\n");  
       }  
        else if(ptr -> next -> next == NULL)  
       {  
             ptr ->next = NULL;  
        }  
        else  
        {   
           temp = ptr -> next;  
           ptr -> next = temp -> next;  
           temp -> next -> pre = ptr;  
          free(temp);  
          printf("deleted\n");
		
		
		
	    }
	
	
 }
 void display()
 {
	 printf("list elements :\n");
	 struct node* temp;
	 temp=root;
	 while(temp!=NULL)
	 {
		 printf("%d\n",temp->data);
		 temp=temp->next;
	 }
 }
 
		    
		    
			
			
			
		
	
