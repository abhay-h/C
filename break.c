#include<stdio.h>
#include<stdlib.h>

int main()
{

long int a,i ,sum = 0 , prod=0;

for ( i = 1; i <=5; ++i)
{
    printf("enter a number = ");
    scanf("%ld",&a);
    if (a<0)
    {
        printf("\n You had enetred a neagative integer ");
        break;
      
    }
     

   sum = sum + a;
}

 

printf("\n The sum of number is =  %ld",sum );

return 0;
}