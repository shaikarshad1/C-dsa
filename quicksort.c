#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void generateRandoms();
void main()
{
	int A[100],i,size,lower=0,upper=999,clock_t t1,t2;
	printf("enter the number of elements ");
	scanf("%d",&size);
	srand(time(0));
        generateRandoms(lower,upper,size);
	for(i=0;i<size;i++)
	{
		printf("%d",size[i]);
	}
        t1=clock();
	quicksort(A,0,size-1);
	printf("elements after sorting");
	for(i=0;i<size;i++)
	{
		printf("%d\n",A[i]);

	}
        t2=clock();
       double tt=((double)(t2-t1))/CLOCKS_PER_SECONDS;
       printf("tt %f",tt);
}
void quicksort(int A[10],int first,int last)
{
	int temp,pivot,i,j;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(A[pivot]>=A[i] && i<last)
			{
				i++;
			}
			while(A[pivot]<A[j])
			{
				j--;
			}
			if(i<j)
			{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
		temp=A[pivot];
		A[pivot]=A[j];
		A[j]=temp;
		quicksort(A,first,j-1);
		quicksort(A,j+1,last);
	}
}

void generateRandoms(int lower, int upper, int size) 
{ 
    int i; 
    for (i = 0; i < n; i++) { 
        int num = (rand() % (upper - lower + 1))+lower; 
        A[i] = num ;
    } 
} 
  