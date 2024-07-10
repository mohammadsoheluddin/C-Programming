#include<stdio.h>
#include<string.h>

int main()
{
    int n, s, k, d;
    scanf("%d",&n);
    s = n-1;
    k = 1;
    d = 3;
    for(int i = 1; i <= (2*n) - 1; i++)
    {   
        for(int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        if(i % 2 == 1)
        {
            for(int j = 1; j <= k; j++)
            {
                printf("#");
            }
        }
        else
        {
            for(int j = 3; j <= d; j++)
            {
                printf("-");
            }
        }

        if(i <= n-1)
        {   
            s--;
            k = k + 2;
            d = d + 2;
        }
        else
        {
            s++;
            k = k - 2;
            d = d - 2;
        }
        printf("\n");
    }
    return 0;
}