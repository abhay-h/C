#include <stdio.h>
#include <stdlib.h>

union student
{
    char name[50];
    float percentage;
    int rollnumber;

} st;

struct studentinfo 
{   
    char pname[50];
    float height;
    int weight;

} st1;


int main()
{

    printf("size of union = %d bytes", sizeof(st));

   printf("\nsize of structure = %d bytes", sizeof(st1));

   return 0;


}