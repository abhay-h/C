#include<stdio.h>
#include<stdlib.h>  

int main()
{
    int *pt, c;
    pt=&c;


    printf("Enter a number = ");
    scanf("%d",&c);

    printf("\nThe value stored in C = %d ",c);
    printf("\n  address of c = %d",pt);


}