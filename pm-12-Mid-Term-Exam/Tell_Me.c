#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);

    for(int t = 0; t < T; t++)
    {
        int N;
        scanf("%d",&N);

        long long int A[N];

        for(int i = 0; i < N; i++)
        {
            scanf("%lld",&A[i]);
        }

        long long int X;
        scanf("%lld",&X);

        long long int found = 0; 

        for(int k = 0; k < N; k++){
            if(A[k] == X)
            {
                printf("YES\n");
                found = 1;
                break;
            }            
        }

        if(!found)
        {
            printf("NO\n");
        }
    }
    return 0;
}