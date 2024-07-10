#include<stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || a * b + c == d || a * b - c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

// a + b - c = d // 1 + 2 - 3 = 0
// a + b * c = d // 1 + 2 * 3 = 9
// a - b + c = d // 1 - 2 + 3 = 2
// a - b * c = d // 1 - 2 * 3 = -5
// a * b + c = d // 1 * 2 + 3 = 5
// a * b - c = d // 1 * 2 - 3 = -1