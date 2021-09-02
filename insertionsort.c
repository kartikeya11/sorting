#include<stdio.h>
void main()
{
    int arr[10]={5,3,2,4,1,6};
    int i,j,temp;
    for(i=1;i<6;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<6;i++)
    {
        printf("\n %d",arr[i]);
    }
}