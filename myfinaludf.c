//Function with No arguments and with Return value Example//
#include<stdio.h>

int Multiplication();        

int main()
{
  int Multi;

  Multi = Multiplication();
  printf("\n Multiplication of a and b is = %d \n", Multi );        

  return 0;            
}

int Multiplication()
{
  int Multi, a = 20, b = 40;  
  
  Multi = a * b;

  return Multi;
}