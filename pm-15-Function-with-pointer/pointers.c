#include<stdio.h>
#include<string.h>

// int main()
// {
//     int x = 100;
//     int * ptr = &x;
//     printf("Address of x is - %p\n",&x);
//     printf("Value of ptr is - %p\n",ptr);
//     printf("Address of ptr is - %p\n",&ptr);
//     printf("Memory size of ptr is - %d\n",sizeof(ptr));
//     return 0;
// }









int main()
{
    int x = 100;
    int * ptr = &x;
    x = 200;
    printf("Address of x is - %d\n",x);
    printf("Value of ptr is - %d\n",*ptr);
    return 0;
}