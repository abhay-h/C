#include<stdio.h>
#include<stdlib.h>

enum user 
{
    car = 5,
    id = 10,
    time = 10,
    rn = 99,
    cred = 87,
    usd = 22,

} us;

int main()
{
 int fuser =us;
 printf("size fo enum var  - %d bytes\n",sizeof(us));

 return 0;









}