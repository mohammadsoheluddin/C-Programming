#include<stdio.h>

int main()
{
    int N;
    int V;
    int pos_sum = 0;
    int neg_sum = 0;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++)
    {   
        scanf("%d",&V);
        if(V>0)
        {   
            pos_sum += V;
        }
        else
        {
            neg_sum += V;
        }
    }
    printf("%d %d\n",pos_sum, neg_sum);
    return 0;
}