#include<stdio.h>
int main()
{
    int i=0,j,k,l=16;
    while (i<=l)
    {
        j=33;
        while (j>=i)
        {
            printf(" ");
            j--;
        }
        k=0;
        while (k<=i)
        {
            printf("* ");
            k++;
        }
        printf("\n");
        i++;
    }
    
}