#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
void merge();
void mergesort();
void generateRandoms();
int X[1000];
int main()
{
	
    int A=1,Z=999,n,i; 
    printf("\n Enter the number of elements\t");
    scanf("%d",&n);
    srand(time(0)); 
    generateRandoms(A,Z,n); 
    for (i=0;i<n;i++)
		printf("%d", arr[i]);
	
   clock_t start,end; 
    start= clock(); 
    mergesort(X,0,n-1);
    end=clock();
    
	printf("elements in sorted order");
	for(i=0;i<n;i++)
	{
		printf("%d\n",X[i]);
	}
	//t2 = clock();
  
	double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Total time taken to sort using merge sort %lf seconds to execute\n",time_taken); 
	return 0;
}
void mergesort(int X[],int low,int high)
{
	int mid;
	if(low<high)
	{
	mid=(low+high)/2;
	mergesort(X,low,mid);
	mergesort(X,mid+1,high);
	merge(X,low,mid,mid+1,high);
}
}
void merge(int X[],int high1,int high2,int low1,int low2)
{
	int i,j,k=0,Y[1000];
	i=low1,j=low2;
	while(i<=high1 && j<=high2)
	{
		if(X[i]>=X[j])
	    {
		 Y[k]=X[j];
		 k++;
		 j++;
		 }
	    else
	    {
		 Y[k]=X[i];
		 k++;
		 i++;
		 }
	 }
	if(i>=high1)
	{
		while(j<=high2)
		{
		Y[k]=X[j];
		k++;
		j++;
	}
	}
	if(j>=high2)
	{
		while(i<=high1)
		{
		Y[k]=X[i];
		k++;
		i++;
	}
	}
	for(i=0;i<k;i++)
	{
		X[low1+i]=Y[i];
	}
}
void generateRandoms(int A, int Z, int n) 
{ 
     
    for(int i=0;i<n;i++) { 
        int num = (rand() % (Z-A+1))+A; 
        X[i] = num ;
    } 
} 