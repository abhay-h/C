#include <stdio.h>
#include <conio.h>
void modify(int x)                // function takes the argument x and since it does not return anything, specify 'void'
{
x = x + 1;
printf("The modified value is %d", x);
return;
}

int main()
{
int a;
printf("Enter a value:");
scanf("%d",&a);
modify(a);                                // pass the argument 'a' to the function
getch();
return 0;
}