#include<stdio.h>
int main(void)
{
    char ch;
    while((ch = getchar()) >= 0){
        if(ch == ' ')
            putchar('\n');
        else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) 
            putchar(ch);
    }
    return 0;
}
