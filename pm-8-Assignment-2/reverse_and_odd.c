#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(i%2 == 1)
        {
            printf("%d ",A[i]);
        }
    }
    
    return 0;
}