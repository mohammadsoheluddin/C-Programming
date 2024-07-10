#include<stdio.h>
#include<string.h>

// No Return + No Parameter

void sum(void)
{
    // int x = 30, y = 40;
    // int sum = x + y;
    // printf("%d",sum); 
    int a,b;
    scanf("%d%d",&a,&b);
    int result = a+b;
    printf("%d\n",result);
}
int main()
{
    sum();
    sum();
    return 0;
}