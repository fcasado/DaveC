#include<stdio.h>
int main(void)
{
    int v,i=0;
    scanf("%d", &v);
    if(v < 1){
        printf("\nError");
    }
    else{
        printf("Initial value is %d\n",v);
        while(v != 1){
            if(v % 2 == 0){
                v /= 2;
                i++;
            }else{
                v = v*3 + 1;
                i++;
            }
            printf("Next value is %d\n",v);
        }
        printf("Final value is %d, number of steps %d\n", v, i);
    }    
    return 0;
}
