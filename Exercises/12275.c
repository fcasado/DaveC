/*
    Exercise 12275: Write a program to read a positive integer 
    at least equal to 3, and print out all possible permutations
    of three positive integers less or equal to than this value

    20150812 fmc

    cc 12275.c -o 12275

 */
#include<stdio.h>
int main(void)
{
    int c,b,a=0;
    while (a<3){
        printf("\nEnter a integer positive [>=3]: ");
        scanf("%d",&a);
    }
    b=(a-1);
    c=(a-2);
    printf("\n%d%d%d",a,b,c);
    printf("\n%d%d%d",a,c,b);
    printf("\n%d%d%d",c,a,b);
    printf("\n%d%d%d",c,b,a);
    printf("\n%d%d%d",b,a,c);
    printf("\n%d%d%d",b,c,a);

    return 0;
}
