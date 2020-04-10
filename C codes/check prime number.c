#include<stdio.h>
int main()
{
    int nu,i,flag=0;
    printf(" Enter a number to check its prime or not : ");
    scanf("%d",&nu);
    printf(" \ninput : %d\n\n",nu);
        
    for(i=2;i<nu;i++)
    {
        if(nu%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    printf(" \n its a prime number : %d",nu);
        
}