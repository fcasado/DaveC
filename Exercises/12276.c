/*
    Write a program to read a number of units of length (a float)
    and print out the area of a circle of that radius. Assume that
    the value of pi is 3.14159
    Out: The area of a circle of radius ... units is ... units.
    20150814 fmc
    cc 12276.c -o 12276 -lm
 */
#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(void)
{
    float radius;
    printf("\nEnter radius: ");
    scanf("%f",&radius);
    if(radius < 0)
        printf("\nError: Negative values not permited\n");
    else
        printf("\nThe area of a circle of radius %.5f units is %.5f units.\n", radius, PI*pow(radius,2.0));
    return 0;
    


}
