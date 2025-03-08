#include<stdio.h>
#include<stdlib.h>
void quicksort();
int main()
{
	int i,n;
	float A[100],w[100],p[100],profit=0.0,m=15.0;
	printf("enter the number of objects");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d weight",i);
		scanf("%f",&w[i]);
		printf("enter the %d profit",i);
		scanf("%f",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		A[i]=p[i]/w[i];
	}
	quicksort(A,p,w,n);
	printf("profit and weight ratio in sorted form");
	for(i=0;i<n;i++)
	{
		printf("%f\n",A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m>0 && w[i]<=m)
		{
			m=m-w[i];
			profit=profit+p[i];
		}
		else
		{
			break;
		}
	}
	if(m>0)
	{
		profit=profit+p[i]*(m/w[i]);
	}
	printf("\nprofit%f",profit);
}
void quicksort(float A[],float p[],float w[],int n)
{
	int i,j;
	float temp1,temp,temp2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]<A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				temp1=p[j];
				p[j]=p[j+1];
				p[j+1]=temp1;
				temp2=w[j];
				w[j]=w[j+1];
				w[j+1]=temp2;
			}
		}
	}
}
