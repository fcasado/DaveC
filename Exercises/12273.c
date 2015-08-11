/*
    Exercise 12273: Write a program to read a "float" representing
    a number of degrees Celsius, and print as a "float" the 
    temperature in degrees Fahrenheit. Print your results in a 
    form such as
    
    100.0 degrees Celsius converts to 212.0 degrees Fahrenheit.
    
    cc 12273.c -o 12273
    
    20150811 fmc
    
 */
   
#include<stdio.h>

int main(void)
{
    float celsius;
    printf("\nInput temp Celsius: ");
    scanf("%f",&celsius);
    printf("\n%.1f degrees Celsius converts to %.1f degrees Fahrenheit.\n",celsius, celsius*(9.0/5.0)+32);
    return 0;
}

