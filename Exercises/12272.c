/*
    Exercise 12272: Write a program that works out the largest and
    smallest values from a set of 10 inputted numbers.
    cc 12272.c -o 12272
    20150811 fmc
 */


#include<stdio.h>

int main(void)
{
    int maior,menor,num,i;
    
    for(i=0; i<10; i++){
        printf("\nInsira o #%d : ",i+1);
        scanf("%d",&num);
        if(num > maior)
            maior = num;
        else if(num < menor)
            menor = num;
    }   
    printf("\n Maior: %d\tMenor: %d\n", maior, menor);
    return 0;
}
