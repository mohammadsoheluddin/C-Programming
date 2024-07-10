#include<stdio.h>
#include<string.h>

// void fun(int x)
// {
//     printf("fun x er address - %p\n",&x);
// }

// int main()
// {
//     int x = 10;
//     printf("main x er address - %p\n",&x);
//     fun(x);
//     return 0;
// }



void fun(int x)
{
    x = 200;
}

int main()
{
    int x = 10;
    fun(x);
    printf("main x er address - %d\n",x);
    return 0;
}