#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int line = (n+1)/2+5;
    int star = 1;
    int space = line - 1;

    for(int i = 1; i <= line; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= star; j++)
        {
            printf("*");
        }
        space = space -1;
        star = star + 2;
        printf("\n");
    }
    
    int space2 = ((line*2)-1-n)/2;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}