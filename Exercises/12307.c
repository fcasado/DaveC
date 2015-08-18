/*
    Exercise 12307: Write a program which reads two integer values.
    If the first is less than second, print the message up. If the second 
    is less than first, print the message down. If the numbers are equal
    print the message equal. If there is an error reading the data, print
    a message containing the word Error and perform exit(0)
    cc 12307.c -o 12307
    20150818 fmc 
 */    
#include<stdio.h>
int main(void)
{
    int a,b;

    if (!scanf("%d %d", &a, &b))
        printf("Error\n");
    else
        printf("%s\n",(a<b ? "up" : (a>b ? "down" : "equal")));
    return 0;
    
}
