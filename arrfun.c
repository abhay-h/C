#include<stdio.h>
void display(int age1, int age2)
{

printf("%d\n",age1);
printf("%d\n",age2);
}

int main()
{

int ageArray[]= {0,1,2,3,4,5};

display(ageArray[4],ageArray[3]);
return 0;


}