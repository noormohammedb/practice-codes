#include<stdio.h>
int main()
{
    char string[30],count=0,flag=0,i,j;
    printf("\nEnter a string to check : ");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++,count++);       //counting string length
    printf("\n Length Of String : %d",count);
    for(i=0,j=count-1;i<count/2;i++,j--)
    {
        if(string[i]!=string[j])
        {
            flag++;
        }
    }
    if(flag==0)
    printf("\n The sting is pallindrum ");
    else
    printf("\n The sting is not pallindrum ");
}