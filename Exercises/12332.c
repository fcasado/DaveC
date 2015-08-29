/*
    Exercise 12332: 
    20150828 fmc
 */
#include<stdio.h>
int main(void)
{
    int a,e,i,o,u,x;
    float total = 0;
    a = e = i = o = u = x = 0;
    char ch;
    while((ch=getchar()) >= 0){
        switch(ch){
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            default: x++; break;

        }
    }
    total = a + e + i + o + u + x;
    total *= 0.01;
    printf("\nNumbers of characters:");
    printf("\na %d; e %d; i %d; o %d; u %d; rest %d",a,e,i,o,u,x);
    printf("\nPercentages of total:");
    printf("\na %.0f%%; e %.0f%%; i %.0f%%; o %.0f%%; u %.0f%%; rest %.0f%%\n",(a/total),(e/total),(i/total),(o/total),(u/total),(x/total));
    return 0;
}
