#include <stdio.h>
void swap(int *n1, int *n2)
{

int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main()
{
    int num1, num2 ;
    printf("enter num1 value = ");
    scanf("%d", &num1);
    printf("\nenter num2 value = ");
    scanf("%d", &num2);
    
    swap( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}

    