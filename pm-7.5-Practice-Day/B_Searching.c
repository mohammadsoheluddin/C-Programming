#include<stdio.h>

int main()
{
    long long int N;
    scanf("%lld",&N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    long long int X;
    scanf("%lld", &X);

    int index = -1;
    for (int i = 0; i < N; i++)
    {   
        if(A[i] == X)
        {   
            index = i;
            break;
        }
    }

    if(index != -1){
        printf("%d", index);
    } else {
        printf("-1");
    }
    return 0;
}