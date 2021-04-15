#include<stdio.h>
#include<stdlib.h>
int main()
{
    int order[5];
   


    printf("ENTRY PLEASE = ");
 
 
    for (int i = 0; i < 5; ++i)
    {
          scanf("%d", &order[i]);
          
           
    }for (int i = 0; i < 5; ++i)
    {
       
          printf("\n %d",order[i]);
           
    }
     
       return 0;
}