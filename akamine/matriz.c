#include<stdio.h>

void printM(int lin, int col, int a[lin][col]);
void borda(int lin, int col, int a[lin][col]);
void moveM(int l1, int c1, int a1[l1][c1], int a2[51][51]);

int main(void)
{
    int max[51][51];

    int mapa[6][20] = {
        {35,35,35,35,80,35,35,35,35,90,35,35,35,35,32,35,35,35,35,35},
        {35,32,32,32,32,32,32,32,32,83,32,32,32,32,32,32,32,35,35,35},
        {35,32,32,32,32,35,35,35,35,32,35,32,32,32,32,32,35,83,32,35},
        {35,32,32,32,32,35,32,32,32,90,35,35,35,35,35,35,35,35,90,35},
        {35,83,32,32,32,32,32,32,90,32,32,32,90,32,83,32,32,32,32,35},
        {35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35}
    };

    printM(6,20,mapa);
    borda(6,20,mapa);
    printf("\n");
    printM(6,20,mapa);

    return 0;
}


void moveM(int l1, int c1, int a1[l1][c1], int a2[51][51]){
    int i, j;
    for(i = 0; i < l1; i++)
        for(j = 0; j < c1; j++)
            a2[i][j] = a1[i][j];
}


void borda(int lin, int col, int a[lin][col]){
    int i;
    for(i = 0; i < lin; i++){
        a[i][0] = 176;
        a[i][col-1] = 176;
    }
    for(i = 0; i < col; i++){
        a[0][i] = 176;
        a[lin-1][i] = 176;
    }
}

void printM(int lin, int col, int a[lin][col]){
    int i, j;
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
}
