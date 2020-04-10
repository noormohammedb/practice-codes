#include<stdio.h>
int main()
{
    int i,j,k,sum=0,a[3][3],b[3][3],r[3][3];

    // First Matrix 

    printf("Enter First Matrix Elements : \n");
    
    // Getting First Matrix 
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nFirst Matrix : \n\n");
    
    // Putting First Matrix
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf(" \n");
    }

    // Second Matrix 

    printf("\nEnter Second Matrix : \n");

    // Getting Second Matrix
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSecond Matrix : \n\n");

    // Putting Second Matrix

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf(" \n");
    }


    // Multiplying Matrix 
    
    for(i=0;i<3;i++)
    {
        printf("\n\nCalculating Result \n");
        for(j=0;j<3;j++)
        {
            printf("\n");
            for(k=0;k<3;k++)
            {
                printf(".(%d %d X %d %d)",i,k,k,j);
                sum=sum+(a[i][k]*b[k][j]);
            }
            printf(" + sum : ");
            r[i][j]=sum;
            sum=0;
        }
    }

    // Putting Result
    
    printf("\nResult : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",r[i][j]);
        }
        printf(" \n");
    }
}