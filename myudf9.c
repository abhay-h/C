#include<stdio.h>
#include<stdlib.h>
int add(int a, int b);

int main()
{

int a,b ,sum = 0;

printf("enter a 2 numbers = ");
scanf("%d %d", &a, &b);

sum = add(a,b);

printf("\n addition of %d and %d = %d",a,b,sum);
return 0;

}

int add(int a, int b)
{

    int sum = 0;
    sum = a+b;

    return sum;
}