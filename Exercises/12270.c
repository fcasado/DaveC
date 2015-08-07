/*
    Input two numbers and work out their sum, average and sum of the
    squares of the numbers.
    
    cc 12270.c -o 12270 -lm 
 */

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    printf("\nInput two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nSum: %.2f", a+b);
    printf("\nAverage: %.2f", (a+b)/2.0);
    printf("\nSum of Squares: %.2f", powf(a,2.0)+powf(b,2.0));
    return 0;
}
