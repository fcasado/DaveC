#include<stdio.h>
#include<math.h>
main()
{
    int i;
    printf("\n\t Number \t\t Square Root of Number\n\n");
    for (i = 0; i <= 360; ++i)
        printf("\t %d \t\t\t %.2f \n", i, sqrt((float)i));
    
}
