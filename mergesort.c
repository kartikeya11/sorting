#include<stdio.h>
mergesort(int arr[], int lo, int up)
{
    if(lo<up)
    {
        int mid=(lo+up)/2;
        mergesort(arr,lo,mid);
        mergesort(arr,mid+1,up);
        merge(arr,lo,mid,up);
    }
}    
merge(int arr[],int lo, int mid, int up)
{
    int i,j,k;
    i=lo;
    j=mid+1;
    k=lo;
    int arr1[10];
    while(i<=mid && j<=up)
    {
        if(arr[i]<=arr[j])
        {
            arr1[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            arr1[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=up)
        {
            arr1[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid)
        {
            arr1[k]=arr[i];
            i++;
            k++;
        }
    }
    for(k=lo;k<=up;k++)
    {
        arr[k]=arr1[k];
    }
}
void main()
{
    int lo,up,i;
    int arr[10]={9,8,7,6,5,4,3,2,1};
    printf("enter the lower bound : ");
    scanf("%d",&lo);
    printf("\n enter the upper bound : ");
    scanf("%d",&up);
    mergesort(arr,lo,up);
    for(i=0;i<9;i++)
    {
        printf("%d",arr[i]);
    }
}