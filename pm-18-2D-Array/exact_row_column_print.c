#include<stdio.h>
#include<string.h>

int main()
{
    int row, col;
    scanf("%d %d",&row,&col);
    int a[row] [col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        printf("%d ",a[i][1]);
    }

    return 0;

    // exact row
    // int e;
    // scanf("%d",&e);
    // for(int j = 0; j < col; j++)
    // {
    //     printf("%d ",a[e][j]);
    // }
    // printf("\n");

}