/*
####P####Z#### #####
#        S       ###
#    #### #     #S #
#    #   Z########Z#
#S      Z   Z S    #
####################

Space - 32
# - 35
P - 80
S - 83
Z - 90
*/

#include<stdio.h>

#define MAX 51

void printm(int, int, int[*][*]);
void movem(int, int, int[*][*], int[*][*]);

int main(void)
{
    int blank[MAX][MAX] = {0};    
    int planta[6][20] = {
        {35,35,35,35,80,35,35,35,35,90,35,35,35,35,32,35,35,35,35,35},
        {35,32,32,32,32,32,32,32,32,83,32,32,32,32,32,32,32,35,35,35},
        {35,32,32,32,32,35,35,35,35,32,35,32,32,32,32,32,35,83,32,35},
        {35,32,32,32,32,35,32,32,32,90,35,35,35,35,35,35,35,35,90,35},
        {35,83,32,32,32,32,32,32,90,32,32,32,90,32,83,32,32,32,32,35},
        {35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35}
    };
    
    printm(6, 20, planta);
    printm(8, 22, blank);
    movem(6, 20, planta, blank);
    printm(8,22,blank);
    return 0;
}


void movem(int nrow, int ncol, int a[nrow][ncol], int b[MAX][MAX])
{
    int i,j;
    for(i = 0; i < nrow; i++)
        for(j = 0; j < ncol; j++){
            printf("\nAntes: i:%2d j:%2d",i,j);
            b[i+1][j+1] = a[i][j];
            printf("\nDepois: i:%2d j:%2d",i,j);
        } 
}


void printm(int nrow, int ncol, int a[nrow][ncol])
{
    int i, j;
    for(i = 0; i < nrow; i++){
        for(j = 0; j < ncol; j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
} 

