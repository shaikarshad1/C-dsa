#include<stdio.h>
#include<stdlib.h>
# define size 20
int q[size];
int front=-1,rear=-1;
void insert();
void delete();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
			        break;
			case 2: delete();
			         break;
			case 3: display();
			         break;
			 case 4: exit(0);
			 default: printf("invalid\n");
		 }
	 }
 }
         
void insert()  
{  
    int item;  
    printf("Enter the element\n");  
    scanf("%d",&item);    
    if((rear+1)%size == front)  
    {  
        printf("fulll\n");  
        return;  
    }  
    else if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else if(rear==size -1 && front != 0)   
    {  
        rear = 0;  
    }  
    else   
    {  
        rear = (rear+1)%size;  
    }  
    q[rear] = item;  
    printf("inserted ");  
}  
void delete()  
{  
    int item;   
    if(front == -1 & rear == -1)  
    {  
        printf("empty\n");  
        return;  
    }  
    else if(front == rear)  
    {  
        front = -1;  
        rear = -1;  
    }  
    else if(front ==size -1)  
        {  
            front = 0;  
        }  
    else   
        front = front + 1;  
}  
      
void display()  
{  
   int i;        
   if(front == -1)  
      printf(" Empty\n");  
   else  
   {  
      i = front;  
      printf("Elements are : \n");  
      if(front <= rear){  
     while(i <= rear)  
        printf("%d\n",q[i++]);  
      }  
      else{  
     while(i <=size - 1)  
        printf("%d\n", q[i++]);  
     i = 0;  
     while(i <= rear)  
        printf("%d\n",q[i++]);  
      }  
   }  
} 
