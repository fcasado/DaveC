/*
    Convert cm to feet and inches.
    Out: ... cm is ... feet ... inches.
    20150814 fmc

 */

#include<stdio.h>

int main(void)
{
    float cm,in;
    int ft;
    printf("\nEnter [cm]: ");
    scanf("%f",&cm);
    ft = (cm/2.54)/12;
    in = ((cm/2.54)/12-ft)*12;
   
    printf("\n %.1f cm is %d feet %.1f inches.\n", cm, ft, in);

    return 0;
}
