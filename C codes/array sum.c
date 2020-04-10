#include<stdio.h>
int main()
{
    int array[1000],i,sum=0,limit;
    printf("\nEnter limit : ");
    scanf("%d",&limit);
    printf("\n\nEnter data of array : \n");
    for (i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n Array Elements \n");
    for (i=0;i<limit;i++)
    {
        printf("%d ",array[i]);
        sum=sum+array[i];
    }
    printf("\n Sum Of The Array is  : %d ",sum);

}