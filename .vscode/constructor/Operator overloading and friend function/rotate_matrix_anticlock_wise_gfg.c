#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3];
    printf("enter the 9 element of the matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // int m=2;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         B[i][j] = A[j][m];
    //         // printf("%d ",A[j][m]);
    //         // printf("%d%d",j,m);
            
    //     }
    //     m--;
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d ", B[i][j]);
    //     }
    //     printf("\n");
    // }
     for (j = 0; j < 9; j++)
        {
            printf("%d ", A[j]);
        }
}

