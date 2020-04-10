#include<stdio.h>
int main()
{
    int array[100],limit,searchkey,i,flag=0;
    printf("\nEnter limit : ");
    scanf("%d",&limit);
    printf("\n enter array elements \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter search key");
    scanf("%d",&searchkey);

    for(i=0;i<limit;i++)
    {
        if(searchkey==array[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nThe element is found at %d \n",i+1);
    }
    else
    {
        printf("\nThe element is not found  \n");
    }
    
}