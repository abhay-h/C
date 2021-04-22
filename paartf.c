#include<stdio.h>
#include<stdlib.h>
int display (int age1, int age2) // prototype
{
    printf("age 1 is = %d\n", age1);   //defination
    printf("age 2 is = %d\n", age2);

}

int main ()
{

    int ageArray[2];

printf("enter your age = ");
scanf("%d", &ageArray[0]);
printf("\n enter your age2 = ");
scanf("%d", &ageArray[1]); 

display(ageArray[0], ageArray[1]); // call
return 0;

}