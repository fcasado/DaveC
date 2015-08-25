/*
    Exercise 12329: Write a program which will read an integer value
    for a base, then read a positive integer written to that base and
    print its value.
    Read the second integer a character at a time; skip over any leading
    non-valid (i.e not a digit between zero and "base-1")
       Input     Output
    ========     ======
    10  1234      1234
     8    77        63    (the value of 77 in base 8, octal)
     2  1111        15    (the value of 1111 in base 2, binary)

    The base will be less than or equal to 10.

    cc 12329.c -o 12329 -lm
    20150824 fmc

 */
#include<stdio.h>
#include<math.h>
int main(void)
{
    int base, ch, pos, decimal = 0, i = 0;
    char n[100];
    scanf("%d ", &base);
    ch = getchar();
    while(ch != '\n'){
        if(ch >= 48 && ch <= (48+(base-1)))
            n[i++] = ch;
        ch = getchar();
    }
    n[i] = '\0';
    pos = i-1;
    i = 0;
    while(pos >= 0){
        decimal += ((n[i]-48)*(int)pow(base,pos));
        i++;
        pos--;
    }
    printf("%d\n", decimal);
    return 0;
}
