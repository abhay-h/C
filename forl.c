#include<stdio.h>
#include<stdlib.h>
int main()
{

int num1 ,num2, num3, sum;

printf("\nenter number 1 = ");
scanf("%d",&num1);
printf("\nenter number 2 = ");
scanf("%d",&num2);
printf("\n enter number 3 = ");
scanf("%d",&num3);
sum = num1 + num2 ; 
if (num1&&num2 == 0)
{
    printf("%d\n ZERO");

}
else{

    printf("\nsum of two numbers is = %d",sum);
}

for ( num3 = 0; num3 < 10; num3++)
{
    printf("\n%d",num3);
}



return 0;



}