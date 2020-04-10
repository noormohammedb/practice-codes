#include<stdio.h>
int getArray(int);
int displayArray(int,int);
int main()
{    
    int arr[1000],limit;
    printf("\nEnter array size : ");
    scanf("%d",&limit);
    arr=getArray(limit);
    printf("\n\n\n ");
    displayArray("%d",arr[],limit);
}

int getArray(int jk[])
{
    int i,array[1000];
    printf("\nEnter Array Elements : ");
    for(i=0;i<jk;i++)
    {
        scanf("%d",&array[i]);
    }
    return array;
}
int displayArray(int a[],int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}