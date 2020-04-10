#include<stdio.h>
int main()
{	
    int f,s;
    char o;
    printf(" Enter a Calculation \n\n");
    scanf("%d%c%d",&f,&o,&s);
    printf(" \n %d%c%d =",f,o,s);
    if(o=='+')printf(" %d ",(f+s));
     else if(o=='-')printf(" %d ",(f-s));
      else if(o=='*')printf(" %d ",(f*s));
       else if(o=='/')printf(" \n %d \n \n",(f/s)); 
}