#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int zero=0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
    }
    printf("0 - %d\n",zero);
    return 0;
}