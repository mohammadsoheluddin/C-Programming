#include<stdio.h>
#include<string.h>

// Return + No Parameter

int sum()
{
    int x = 20, y = 20;
    int sum = x + y;
    return sum; 
}
int main()
{
    int result = sum();
    printf("%d",result);
    return 0;
}