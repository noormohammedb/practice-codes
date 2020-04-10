#include<stdio.h>
int main()
{
    // First Assignment
    /*
    float mark;
    printf("\n enter your mark to check : ");
    scanf("%f",&mark);
    if(mark>=50) printf("\n You are passed");
       else printf("\n unfortunatly your failed");
    */  

    // Second Assignment
    /*
    float mark;
    printf("\n enter your mark to check it's grade : ");
    scanf("%f",&mark);
    if (mark>=90)
     {
        printf("\n You got A");
     }
       else if (mark>=80)
       {
           printf("\n You got B");
       } 
         else if (mark>=70)
         {
             printf("\n You got C");
         }
            else if (mark>=60)
           {
               printf("\n You got D");
           }
            else if (mark>=50)
            {
                printf("\n You got E");
            }
                else
                {
                    printf("\n Youre getting failed");
                }
    */            
      
    // Third Assignment
    int day;
    printf("\n Enter a number : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1 : printf("\n Sunday");
                 break;
        case 2 : printf("\n Monday");
                 break;
        case 3 : printf("\n Tuesday");
                 break;
        case 4 : printf("\n Wednesday");
                 break;
        case 5 : printf("\n Thursday");
                 break;
        case 6 : printf("\n Friday");
                 break;
        case 7 : printf("\n Saturday");
                 break;
        default : printf("\n Error");
                  
        
    }

}