#include<stdio.h>

void printm(int lin, int col, int m[lin][col]);
void muda(int lin, int col, int m[6][6]);

int main(void)
{
    int a[6][6] = { {-1,-1,-1,-1,-1,-1},
                    {-1,1,1,1,1,-1},
                    {-1,1,2,1,1,-1},
                    {-1,1,1,2,1,-1},
                    {-1,1,1,1,1,-1},
                    {-1,-1,-1,-1,-1,-1}  };
    
//    printf("\nLine:%3d Col:%3d Cel:%d\n",0,1,a[0][1]);
//    printf("\nLine:%3d Col:%3d Cel:%d\n",0,2,a[0][2]);
//    printf("\nLine:%3d Col:%3d Cel:%d\n",1,1,a[1][1]);
    printm(6,6,a);
    muda(1,1,a);
    printm(6,6,a);

    return 0;
}


void printm(int lin, int col, int m[lin][col])
{
    int i, j;
    printf("\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
            printf("%3d",m[i][j]);
        printf("\n");
    }

}


void muda(int lin, int col, int m[6][6])
{   
    if(m[lin][col] != 1) {
//        printf("\nLine:%3d Col:%3d Cel:%3d\n",lin,col,m[lin][col]);
        return;
    }
    else{
        m[lin][col] = 3;
        muda(lin - 1, col, m);
        muda(lin, col + 1, m);
        muda(lin + 1, col, m);
        muda(lin, col - 1, m);
    }

}

