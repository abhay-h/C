#include<stdio.h>
#include<stdlib.h>
int main()
{

#define password = 1234;

int entry , x = 10;

printf(" welcome ");

while (x!=0)
{
    printf("\n enter password :- ");
    scanf("%d", &entry);

    if (entry == 1234)
    {
        printf("\npassword is correct");

        printf("\nyour hash is =  5R3QPM756");

        x = 0;
    
    }
    
    else{
        printf("\n try again , its worng password");

    }
    printf("\n");
}

return 0;

}
