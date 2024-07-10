#include<stdio.h>
#include<string.h>

void odd_even()
{
    int n; 
    scanf("%d",&n);
    long long int A[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld",&A[i]);
    }
    int oddNumbers = 0;
    int evenNumbers = 0;
    for(long long int i = 0; i < n; i++)
    {
        if(A[i] % 2 == 0)
        {
            evenNumbers++;
        }
        else 
        {
            oddNumbers++;
        }
    }
    printf("%d %d",evenNumbers,oddNumbers);
}
int main()
{
    odd_even();
    return 0;
}