#include<stdio.h>
#include<stdlib.h>

int main()
{
long int a;

printf("Enter a negative number: ");
scanf("%ld",&a);
 
printf("\n Orignal values = %ld",a);

printf("\nAbsolute value = %ld ",abs(a));

return 0;



}