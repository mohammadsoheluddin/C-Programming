#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 0; i < T; i++)
    {
        int N;
        scanf("%d",&N);
        char S[N+1];
        scanf("%s",S);
        int tiger = 0, pathan = 0;
        for(int j = 0; j < N; j++)
        {
            if(S[j] == 'T')
            {
                tiger++;
            }
            else if (S[j] == 'P') 
            {
                pathan++;
            }
        }
        if(pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else {
            printf("Draw\n");
        }
    }
    return 0;
}