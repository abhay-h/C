#include<stdio.h>
#include<stdlib.h>

int main()
{

int marks[5],i;

printf("Hello , Please enter your subject score = ");

for ( i = 0; i < 5; i++)
{
    scanf("%d",&marks[i]);
    
}

for ( i = 0; i < 5; i++)
{
    printf("\nYou score in all subject are given below \n");
    printf("\nPhysics = %d",marks[0]);
    printf("\nEnglish = %d ",marks[1]);
    printf("\nMaths = %d",marks[2]);
    printf("\nBiology = %d",marks[3]);
    printf("\nChemistry = %d",marks[4]);
 

}

return 0;
}

