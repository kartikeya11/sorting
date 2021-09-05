#include<stdio.h.>
void quicksort(int arr[], int lo, int up)
{
    if(lo<up)
    {
        int loc = partition(arr, lo, up);
        quicksort(arr,lo,loc-1);
        quicksort(arr,loc+1,up);
    }
}
int partition(int arr[], int lo, int up)
{
    int start=lo;
    int end=up;
    int temp;
    int pivot=arr[lo];
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    temp=arr[lo];
    arr[lo]=arr[end];
    arr[end]=temp;

return end;
}
void main()
{
    int arr[10]={5,7,3,9,2,7,1,8};
    int lo,up;
    printf("enter the lower bound : ");
    scanf("%d",&lo);
    printf("\nenter the upper limit : ");
    scanf("%d",&up);
    quicksort(arr,lo,up);
    for(int i=0;i<8;i++)
    {
        printf("%d",arr[i]);
    }
}