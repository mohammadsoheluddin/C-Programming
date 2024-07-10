#include<stdio.h>
#include<string.h>

void fun(int i)
{
    // base case
    if(i == 6) return;
    fun(i+1);
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}