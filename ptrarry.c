#include<stdio.h>

int main()
{

int  mark[4];
int i;
for ( i = 0; i < 4; ++i)
{
    printf("&mark[%d] = %p\n", i,&mark[i]);

}

printf("Address of arry x : %p",mark);
return 0;


}