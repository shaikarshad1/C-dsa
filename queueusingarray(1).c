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
	 int ele;
	 printf("enter element\n");
	 scanf("%d",&ele);
	 if(rear==size-1)
	 {
		 printf("full\n");
	 }
	 if(front==-1 && rear==-1)
	 {
		 front=0;
		 rear=0;
	 }
	 else
	 {
		 rear=rear+1;
	 }
	 q[rear]=ele;
	 printf("inserted %d\n",ele);
 }
 void delete()
 {
	 int ele;
	 if(front==-1 || front>rear)
	 {
		 printf("empty\n");
	 }
	 else
	 {
		 ele=q[front];
		 if(front==rear)
		 {
			 front=-1;
			 rear=-1;
		 }
		 else
		 {
			 front=front+1;
		 }
		 printf("deleted %d\n",ele);
	 }
 }
 void display()
 {
	 
	 int i;
	 if(rear==-1)
	 {
		 printf("empty\n");
	 }
	 else
	 {
		 printf("queue elements:\n");
		 for(i=front;i<=rear;i++)
		 {
			 printf("%d",q[i]);
		 }
		 
	 }
 }
 
	 
	 
