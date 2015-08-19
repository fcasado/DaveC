/*
    Exercise 12328: Write a program to read in numbers until the number
    -999 is encountered. The sum of all number read until this point should
    be printed out.
    cc 12328.c -o 12328
    20150818 fmc
*/
#include<stdio.h>
int main(void)
{   
    float n,sum;
    n = sum = 0.0;
    while(scanf("%f",&n) == 1 && n != -999)
    {
        sum += n;
    }
    printf("Sum: %.2f\n",sum);
        

    return 0;
}
