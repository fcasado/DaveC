/*  
    Given amount of time in seconds output equivalent in h m s
    input: 7322
    out: 7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.
    20150814 fmc
    cc 12278.c -o 12278
 */
#include<stdio.h>

int main(void)
{
    int totsec, h, m, s;
   
    printf("\nEnter [s]: ");
    scanf("%d",&totsec);
    
    h = totsec/3600;
    m = (totsec/60)-(h*60);
    s = totsec - (h*3600) - (m*60);

    printf("\n %d seconds is equivalent to %d hours %d minutes %d seconds.\n", totsec, h, m, s);
        
    return 0;
}
