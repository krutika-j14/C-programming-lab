#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],r,col,i,j;

    printf("enter rows and columns:");
    scanf("%d %d",&r,&col);

    printf("enter matrix A:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter matrix B:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\naddition:\n");

    for(i =0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    printf("\nsubtraction:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
           printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }

    printf("\ntranspose of A:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
