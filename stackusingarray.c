#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
int k;
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
	if(top==size-1)
	{
		printf("insertion not posiible\n");
	}
	else
	{
		printf("enter element\n");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
		printf("inserted element is %d\n",ele);
	}
}
void delete()
{
	if(top==-1)
	{
		printf("deletion not possible\n");
	}
	else
	{
		int k=stack[top];
		top--;
		printf("deleted is %d\n",k);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("empty\n");
	}
	else
	{
		printf("stack elements are\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}


	
