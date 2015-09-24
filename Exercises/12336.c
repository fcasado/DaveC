#include<stdio.h>

int main(void)
{
    char line[200];
    char ch;
    int i = 0;
    while(i < 200 && (ch = getchar(), ch >= 0)){
        line[i++] = ch;
    }
    while( i >= 0)
        putchar(line[i--]);
    return 0;
}
