#include<stdio.h>
int main()
{
    int array[10],i,limit,sum;
    printf(" \n Enter limit \n");
    scanf("%d",&limit);
    printf(" \n Enter 5 values \n");
    for(i=0;i<limit;i++)
    {
        scanf(" %d",&array[i]);
    }
    printf("\n Output");
    for(i=0;i<limit;i++)
    {
        printf(" %d,",array[i]);
    }
     
}