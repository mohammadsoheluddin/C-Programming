#include<stdio.h>
#include<string.h>

// No Return + Parameter

void sum(int x, int y)
{
    int result = x + y; 
    printf("%d\n", result);
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}