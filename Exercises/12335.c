#include<stdio.h>
int main(void)
{
    int i = 0, n[100]; // An array of mem trash
    for(i = 0; i < 100; i++) n[i] = random()%99;

    n[random()%99] = 1024; // the key search value
   // for(i = 0; i < 100; i++) n[i] = random()%99;
    i = 0;
    while(i < 100 && n[i] != 1024){
        i++;
    }
    printf("\n The value 1024 is on position: %d\n",i);
  
    for(i = 0; i < 100; i++) printf(" %d ",n[i]);

    //printf("\n The value 1024 is on position: %d\n",i);
    
        
   // for (i = 0; i < 100; i++)
   //     printf("%p -> %d ", &n[i], n[i]);

    return 0;
}
