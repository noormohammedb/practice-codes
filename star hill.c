#include<stdio.h>
int main()
{
    int i,j,l;
    printf("Enter no.of lines : ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=(l-(i+1));j++)
        {
         printf("* ");
        }
       printf("\n");
    }

}