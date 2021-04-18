#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long int num,sq,cr;

    printf("Enter a positive integer = ");

    scanf("%d",&num);

    if (num<0)
    {
        exit(0);
    }
       
  printf("\n You had entered %ld",num);

     sq=sqrt(num);
     cr= cbrt(num);


        printf("\nSquare root of %ld =  %ld", num ,sq);
        printf("\nCube root of %ld =  %ld", num ,cr);

       return 0; 

}
 