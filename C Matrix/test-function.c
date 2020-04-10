#include<stdio.h>
int main()
{
    int *a,i;
    scanf("%d",a);
    for(i=0;i<2;i++)
    scanf("%d",a+i);
    printf("\n");
    printf("a=%d\n\n",*a);
    for(i=0;i<11;i++)
    printf("%d\n",*(a+i));
}