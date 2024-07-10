#include<stdio.h>
#include<string.h>

int count_before_one(int A[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] != 1)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    int n; 
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    int count = count_before_one(A, n);
    printf("%d",count);
    return 0;
}