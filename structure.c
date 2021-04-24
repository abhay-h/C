#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student
{
    char name[100];
    int rollnumber;
    int score;
    long int contact;
} st,st1,st2,st3;

struct info
{
   char notice[50]; 
} fs;

int main()
{
    printf("Please Enter Your NAME => ");

    scanf("%s",&st.name);

 printf("enter rollnumber =  ");
scanf("%d",&st1.rollnumber);

printf("Enter your score =  ");

scanf("%d",&st2.score);
if (st2.score<0)
{
    printf("you had failed");
    exit(0);
}


printf("enter contact = ");

scanf("%ld",&st3.contact);

printf("\n name = %s\n",st.name);

printf("\n enter a notice => ");
scanf("%s",&fs.notice);

printf("roll number = %d\ncontact = %ld\nscore = %d ",st1.rollnumber,st2.score,st3.contact);

printf("\n %s\n",fs.notice);

return 0;
}