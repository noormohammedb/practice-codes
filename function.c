#include<stdio.h>
int sum();
int main()
{
    int c;
    c=sum();
    printf("\n %d",c);
}
int sum()
{
    int sum,a,b;
    printf("\nEnter Two Value : ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}