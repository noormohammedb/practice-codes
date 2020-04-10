#include<stdio.h>
int main()
{
    int i,j,k,l=16;
    printf("\n\n\n\n\n\n                          Happy Christmas\n\n\n");
    for(i=0;i<=l;i++)
    {
        for(j=33;j>=i;j--) printf(" ");
        for(k=0;k<=i;k++) printf("* ");
        printf("\n");
    }
    for(i=0;i<(l/3)+1;i++) printf("                                |   |\n");
    printf("                                `````\n\n\n\n");
}
