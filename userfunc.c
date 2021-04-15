// C program to calculate the speed of car// 
#include<stdio.h>
#include<stdlib.h>

long int speedtest(long int a, long int b);  

long int main()
{

 long int distance , time ,calculation ;

    printf("Enter the distance in km  =>  ");

    scanf("%ld",&distance);


    printf("Enter the time in Hr => ");

    scanf("%ld",&time);
if (time > distance)
{
    exit(1);
}

    calculation = speedtest(distance,time); 
       
     printf("\n The required Speed for distance => %ld  Km and time => %ld hr ,is =>  %ld KM/Hr",distance,time,calculation);

return 0;
}

 long int speedtest(long int a, long int b)

{   
 long int output;

    output = a/b;

    return (output);
}