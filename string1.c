#include<stdio.h>
#include<stdlib.h>
void display(char st[])
{

    printf("string output  ");
    puts(st);
}
int main()
{

char name[30];
printf("enter the name => ");

fgets(name,sizeof(name),stdin);

printf("name  => ");
puts(name);
return 0;

}