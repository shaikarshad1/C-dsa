#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
void merge();
void mergesort();
void generateRandoms();
int A[1000];
int main()
{
	/*int A[10],n,i;
	printf("enter number of elements to be inserted into array");
	scanf("%d",&n);
	printf("enter elements into array");
	for(i=0;i<n;i+{
		scanf("%d",&A[i]);
	}
	printf("array elements");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	*/
	int lower = 50, upper = 200,n; 
    int i;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    //printf("%ld",time(0));
    // Use current time as seed for random generator 
    srand(time(0)); 
    generateRandoms(lower, upper,n); 
    for (i = 0; i< n; i++)
		printf("%d ", A[i]);
	
	clock_t t1,t2; 
    t1 = clock(); 
    mergesort(A,0,n-1); 
    
	printf("elements in sorted order");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",A[i]);
	}
	t2 = clock();
  
	double time_taken = ((double)(t2-t1))/CLOCKS_PER_SEC; // in seconds 
    
    printf("The function mergesort() took %lf seconds to execute \n", time_taken); 
	return 0;
}
void mergesort(int A[],int s,int l)
{
	int mid;
	if(s<l)
	{
	mid=(s+l)/2;
	mergesort(A,s,mid);
	mergesort(A,mid+1,l);
	merge(A,s,mid,mid+1,l);
}
}
void merge(int A[],int s1,int l1,int s2,int l2)
{
	int i,j,k=0,B[1000];
	i=s1,j=s2;
	while(i<=l1 && j<=l2)
	{
		if(A[i]>=A[j])
	    {
		 B[k]=A[j];
		 k++;
		 j++;
		 }
	    else
	    {
		 B[k]=A[i];
		 k++;
		 i++;
		 }
	 }
	if(i>=l1)
	{
		while(j<=l2)
		{
		B[k]=A[j];
		k++;
		j++;
	}
	}
	if(j>=l2)
	{
		while(i<=l1)
		{
		B[k]=A[i];
		k++;
		i++;
	}
	}
	for(i=0;i<k;i++)
	{
		A[s1+i]=B[i];
	}
}
void generateRandoms(int lower, int upper, int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) { 
        int num = (rand() % (upper - lower + 1))+lower; 
        A[i] = num ;
    } 
} 
 
