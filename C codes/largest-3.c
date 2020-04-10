#include<stdio.h>
int main()
{
    int f,s,t;
    printf("\n Enter 3 numbers to be checked  ");
    scanf("%d%d%d",&f,&s,&t);
    if(f>s)
    {
       if(f>t)
         printf("\n %d is larger than others \n",f);
          else
             printf("\n %d is larger than others \n",t);
    }
      else if(s>t)
         printf("\n %d is larger than others \n",s);
             else
                 printf("\n %d is larger than others \n",t);
}