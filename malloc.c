#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr ,sum = 0; //  n is variable for accepting no of elements , i is for for loop, *ptr is pointer for malloc//

    printf("enter no of elements -> ");
    scanf("%d",&n);

    ptr = (int*)malloc(n* sizeof(int)); // allocating  memory of n size according to user input//

    if (ptr == NULL) // if user gives no input the prorgram exits//
    {
       printf(" error ! memory allocation  ");
       exit(0);
    }

       printf("enter element -> "); // accepting elements //

        for ( i = 0; i < n; ++i)
    {
            scanf("%d",ptr+i);
            sum+= *(ptr+i); // here each element is getting add //
        
    }

       printf(" sum = %d\n",sum); // return sum//

       free(ptr); // free memory//
       return 0;
 }