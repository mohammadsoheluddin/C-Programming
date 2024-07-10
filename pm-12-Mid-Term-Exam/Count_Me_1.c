#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    int two = 0, three = 0;
    for (int i = 0; i < N; i++)
    {
        if(A[i]%2 == 0 && A[i]%3 == 0)
        {
            two++;
        }
        else if (A[i]%2 == 0)
        {
            two++;
        }
        else if (A[i]%3 == 0)
        {
            three++;
        }
    }
    printf("%d %d",two,three);
    return 0;
}