#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,p[100],w[100],a[100];
	printf("enter no of objects",n);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter %d profit",i);
		
		scanf("%d",&p);
		printf("enter %d weight",i);
		scanf("%d",&w);
	}
	int a;
	for(int i=0;i<n;i++)
	{
		a[i]=p[i]/w[i];
		printf("a array",a);
	}
}
