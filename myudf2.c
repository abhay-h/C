// C program to find  Work, Power, and Energy //
#include <stdio.h>
#include <stdlib.h>
float calculation(int m, int v)
{
    return (0.5 * m * v * v);
}
int main()
{

    float m, v, kenergy;

    printf("\nenter the values of Mass =  ");

        scanf("%f", &m);
        
        if (m<0)
        {
            exit(1);
        }
        else{
            
       

    printf("\nenter the values of Velocity =  ");

        scanf("%f", &v);

    kenergy = calculation(m,v);

    printf("KINETIC ENERGY = %f J", kenergy);

    return kenergy;

}

 }
        
 