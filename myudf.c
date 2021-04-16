// C program to find area of  Rhombus //
#include<stdio.h>
#include<stdlib.h>
 
float area(float p,float q)
{
    return (p*q)/2;

}
int main()
{

float  p,q,result;

  printf("enter diagonal 1st =  ");
  scanf("%f",&p);

printf("enter diagonal 2nd =  ");
  scanf("%f",&q);
  
result =  area(p,q);
printf("\n area of Rhombus is =  %f ",result);

return result;
}


