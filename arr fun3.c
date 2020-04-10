#include<stdio.h>
int array[100];
void arrayget(int);
void arrayput(int);
int main()
{
    int limit;
    printf("\nEnter size of array : ");
    scanf("%d",&limit);
    arrayget(limit);
    arrayput(limit);
}
void arrayget(int size)
{
    int i;
    printf("\nEnter array values : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
}
void arrayput(int size)
{
    int i;
    printf("\n array is here : \n  ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
}