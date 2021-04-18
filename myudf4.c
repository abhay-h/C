#include<conio.h>
#include<stdio.h>
void modify()
{
int a;
printf("Enter a value:" )
scanf("%d",&a);
a=a+10;
return a;
}

int main()
{
int x;
x=modify(); 
printf("The modified value is %d",x);
getch();
return 0;
}