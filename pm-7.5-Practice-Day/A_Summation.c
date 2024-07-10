#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    int A[n];
    
    for(int i = 0; i <= n; i++){
        scanf("%d",&A[i]);
    }

    long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += A[i];
    }

    if(sum < 0){
        sum = -1 * sum;
    }

    printf("%lld", sum);
    return 0;
}