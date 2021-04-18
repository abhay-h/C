#include<stdio.h>
#include<conio.h>
void modify()                   //function definition
{
int a;
printf("Enter a value:");
scanf("%d",&a);
a=a+10;
printf("The modified value is %d",a);
return;
}

int main()
{
modify();                           //function call
getch();
return 0;
}