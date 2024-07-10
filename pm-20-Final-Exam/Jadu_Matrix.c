#include<stdio.h>
#include<string.h>

int main()
{
    int N, M;
    scanf("%d %d",&N,&M);
    int a[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int flag = 1; 
    if(N != M)
    {
        flag = 0;
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(i + j == N - 1 || i == j)
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if(a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}