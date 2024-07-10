#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int first_digit = n%10;
    n /= 10;
    int second_digit = (n-first_digit/10)%10;
    if (first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }
    return 0;
}