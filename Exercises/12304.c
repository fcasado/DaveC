/*
    Exercise 12304: Write a program to read two characters, and
    print their value when interpred as 2-digit hexadecimal
    number. Accept upper case letters for values from 10 to 15.
    cc 12304.c -o 12304
    20150816 fmc
 */

#include<stdio.h>

int main(void)
{
    char hex[3];
    char a,b;
    int value1 = 0, value2 = 0;
    //printf("Input two characters [A B]: ");
    //scanf("%c %c", &a, &b);
    printf("\nInput two caracters hexadecimal number[0-F][0-F]: ");
    scanf("%s",hex);
    a = hex[0];
    b = hex[1];
    if (a>=48 && a<=57)
        value1 = (a - 48)*16;
    else if (a>=65 && a<=70)
        value1 = (a - 55)*16;
    else
        value1 = -1;
    if (b>=48 && b<=57)
        value2 = (b - 48);
    else if (b>=65 && b<=70)
        value2 = (b - 55);
    else
        value2 = -1;

    if (value1 < 0 || value2 < 0)
        printf("\nError: invalid hexadecimal number\n");
    else
        printf("Decimal value: %d\n",value1+value2);
    return 0;
}
