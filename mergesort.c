#include<stdio.h>  
void mergeSort(int[],int,int);  
void merge(int[],int,int,int);  
int main ()  
{  
    int n,i;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}
    mergeSort(a,0,n);  
    printf("printing the sorted elements");  
    for(i=0;i<n;i++)  
    {  
        printf("\n%d\n",a[i]);  
    }  
    return 0;    
}  
void mergeSort(int a[], int beg, int end)  
{  
    int mid;  
    if(beg<end)  
    {  
        mid = (beg+end)/2;  
        mergeSort(a,beg,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,beg,mid,end);  
    }  
}  
void merge(int a[], int beg, int mid, int end)  
{  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[10];  
    while(i<=mid && j<=end)  
    {  
        if(a[i]<a[j])  
        {  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=end)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index)  
    {  
        a[k]=temp[k];  
        k++;  
    }  
}  
