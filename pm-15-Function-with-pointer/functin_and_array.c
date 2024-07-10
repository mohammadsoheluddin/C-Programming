#include<stdio.h>
#include<string.h>

// void fun(int ar[], int n)
// void fun(int * ar, int n)
// void fun(double * ar, int n)

void fun(double ar[], int n)
{
    // int sz = sizeof(ar) / sizeof(int);
    // printf("%d",sz);
    for(int i = 0; i < n; i++)
    {
        // printf("%d ",ar[i]);
        printf("%0.2lf ",ar[i]);
    }
}
int main()
{
    // int ar[5] = {10.5, 20.2, 30.3, 40.7, 50.9};
    double ar[5] = {10.5, 20.2, 30.3, 40.7, 50.9};
    fun(ar, 5);
    return 0;
}