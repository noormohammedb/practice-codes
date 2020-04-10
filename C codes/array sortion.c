#include<stdio.h>
int main()
{
    int array[100],limit,i,j,temp;
    printf("\nEnter the limit of array : ");
    scanf("%d",&limit);
    printf("\n enter array elements \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit-1;j++)
        {
            if(array[i]<array[j])
            {
             temp=array[i];
             array[i]=array[j];
             array[j]=temp;
            }
            
        }
    }
    printf("\n Sorted Array \n");
    for(i=0;i<limit;i++)
    {
        printf("%d",array[i]);
    }

}