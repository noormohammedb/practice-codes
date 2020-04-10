#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter 3 numbers to check its average \n");
    scanf("%f%f%f",&a,&b,&c);
    printf("\n averager of %f, %f, %f, are = %f\n",a,b,c,((a+b+c)/3));
}