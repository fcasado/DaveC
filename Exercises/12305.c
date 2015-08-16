/*
    Exercise 12305: Read an integer value. Assume it is the number
    of a month of the year; print out the name of that month.
    cc 12305.c -o 12305
    20150816 fmc
 */
#include<stdio.h>
int main(void)
{
    int month;
    printf("\nEnter the number of month: ");
    scanf("%d",&month);
    switch (month)
        {
            case 1: printf("\nJanuary\n");
                    break;
            case 2: printf("\nFebruary\n");
                    break;
            case 3: printf("\nMarch\n");
                    break;
            case 4: printf("\nApril\n");
                    break;
            case 5: printf("\nMay\n");
                    break;
            case 6: printf("\nJune\n");
                    break;
            case 7: printf("\nJuly\n");
                    break;
            case 8: printf("\nAugust\n");
                    break;
            case 9: printf("\nSeptember\n");
                    break;
            case 10: printf("\nOctober\n");
                    break;
            case 11: printf("\nNovember\n");
                    break;
            case 12: printf("\nDecember\n");
                    break;

            default:
                    printf("\nError: Invalid month\n");
                    break;
        }

    return 0;
}
