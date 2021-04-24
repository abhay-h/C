#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} j;

int main()
{
   printf("enetr your salary ");
   scanf("%f",&j.salary);

printf("\nenter your workerNo ");
scanf("%d",&j.workerNo);


   printf("Salary = %f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}