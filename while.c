#include<stdio.h>
#include<stdlib.h>
int main()
{

int a ,b, sum;

printf("enter a number = ");
scanf("%d", &a);
printf("\nenter a second number = ");
scanf("%d", &b);
 


do
{
    sum = a + b;


printf("\n Your addition of two numbers is = %d",sum);
} while (a<0);

return 0;
}



