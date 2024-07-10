#include<stdio.h>
#include<string.h>

int main()
{
    double x = 2.56;
    double * ptr = &x;
    double * ptr2 = ptr;

    // *ptr = 10.20;
    *ptr2 = 100.20;

    printf("value of x is - %0.2lf\n",x);
    printf("value of ptr is - %0.2lf\n",*ptr);
    printf("value of ptr is - %0.2lf\n",*ptr2);
    printf("size of ptr is - %d\n",sizeof(ptr));
    return 0;
}