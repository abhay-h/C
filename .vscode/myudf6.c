#include <stdio.h>
#include<conio.h>


void modify(int x)     // function takes the argument x and since it does not return anything, specify 'void'
{
x = x + 10;
return x;
}

int main()
{
int a;
printf("Enter a value:");
scanf("%d",&a);
printf("the modified value is %d", modify(a));   // pass the argument 'a' to the function
getch();
return 0;
}