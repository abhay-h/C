#include<stdio.h>

void addone(int* ptr)
{
    (*ptr)++;
}

int main()
{

int*p , i;

printf("enter a number => ");
scanf("%d", &i);

    p = &i;
    addone(p);

printf("%d",*p);
return 0;

}
 