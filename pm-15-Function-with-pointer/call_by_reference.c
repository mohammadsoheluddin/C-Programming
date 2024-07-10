#include<stdio.h>
#include<string.h>

void fun(int *p)
{
    // printf("p er value - %p\n",p);
    // printf("main er x er value - %d\n",*p);
    *p = 200;
    // printf("main er x er value - %d\n",*p);
}

int main()
{
    int x = 100;
    // printf("x er address - %p\n",&x);
    fun(&x);
    printf("main er x er value - %d\n",x);
    return 0;
}