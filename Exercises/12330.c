/*  
    Exercise 12330: 
    cc 12330.c -o 12330
    20150827  fmc
 */
#include<stdio.h>
int main(void)
{
    int i, years;
    float capital, sum, rate, interest;
    
    scanf("%f %f %d", &capital, &rate, &years);
    printf("\nYear\tInterest\tSum\n----+----------------+-----------\n");
    for(i = 1; i <= years; i++){
        interest = capital * rate /100;
        printf("%3d\t%9.2f\t%9.2f\n", i, interest, capital+=interest);
    } 
    return 0;
}
