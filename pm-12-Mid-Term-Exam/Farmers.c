#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);

    for(int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int days = (D*M1)/(M1+M2);
        int difference = D - days;

        printf("%d\n",difference);
    }  
    return 0;
}