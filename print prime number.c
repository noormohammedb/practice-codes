#include<stdio.h>
int main()
{
    int nu,i,flag=0,j;
    printf(" enter a count ");
    scanf("%d",&nu);
    printf("\n input : %d\n\n",nu);
    for(j=2;j<=nu;j++)
    {    
        for(i=2;i<j;i++)
            if(j%i==0)
                flag++;
        if(flag==0)
        printf(" %d",j);
    flag=0;
    }   
}