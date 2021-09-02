#include<stdio.h>
int small(int arr[], int i)
{
    int pos,j,small;
    small=arr[i];
    for(j=i+1;j<7;j++)
    {
        if(arr[j]<small)
        {
            small=arr[j];
            pos=j;
        }
    }
    return pos;
}
void main()
{
    int arr[10]={5,3,8,6,2,1,9};
    int i,pos,temp;
    for(i=0;i<7;i++)
    {
        pos=small(arr,i);
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
}