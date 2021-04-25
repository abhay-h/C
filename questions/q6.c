#include<stdio.h>
#include<stdlib.h>

int main()
{

int quot,rem, num1,num2;

printf("enter a number 1 > ");

scanf("%d",&num1);
printf("ener a number 2 > ");
scanf("%d",&num2);

quot = num2/num1;
rem = num1 % num2;

printf("%d is quot\n",quot);
printf("%d is rem",rem);
return 0;

}