#include "stdlib.h"
#include "stdio.h"

int display(int n)
{

if (n<=50)
{
    printf("%d",n);
    display(n+1);
}
}

int main()
{

int n = 1;

printf("\n\nfirst 50 natural numbers ");

display(n+1);
printf("\n\n");
return 0;
}

