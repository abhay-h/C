//C Function with argument and No Return value//
#include<stdio.h>

void Addition(int a, int b);        

void main()
{
  int a, b;

  printf("\n Please Enter two integer values \n");
  scanf("%d %d",&a, &b);

  //Calling the function with dynamic values
  Addition(a, b);
}

void Addition(int a, int b)
{
  int Sum;  
  
  Sum = a + b;

  printf("\n Additiontion of %d and %d is = %d ", a, b, Sum);
