/*
    Exercise 12327: Write a program to read in 10 numbers and compute
    the average, maximum and minimum values.
    cc 12327.c -o 12327
    20150818
 */
#include<stdio.h>
int main(void)
{
    int i=0;
    float n,avg,max,min;
    scanf("%f", &max);
    avg = min = max;
    while (i++<9)
    {
        scanf("%f",&n);
        avg += n;
        n > max ? max=n : (n < min ? min = n : 0);
    }   
    printf("\nAverage: %.2f Maximum: %.2f Minimum: %.2f\n",avg/10.0,max,min);
    return 0;
}
