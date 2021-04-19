#include<stdio.h>
#include<conio.h>
void modify()                   
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
modify();                           
getch();
return 0;
}