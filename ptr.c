#include<stdio.h>

int display(int a)
{
    int out;
    out = display(a);
}

int main()
{
    int a;
    int *pt = &a;

printf("enter a number = ");

scanf("%d",&a);
 
printf("\n%d",*pt);

}