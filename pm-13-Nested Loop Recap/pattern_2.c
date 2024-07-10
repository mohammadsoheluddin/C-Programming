#include<stdio.h>
#include<string.h>

// int main()
// {
//     int n, s, k;
//     scanf("%d",&n);
//     s = n-1;
//     k = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
       
//         for(int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         s--;
//         k = k + 2;
//         printf("\n");
//     }
//     return 0;
// }

// =======================================
// int main()
// {
//     int n, s, k=1;
//     scanf("%d",&n);
//     s = n-1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= s; j++)
//         {
//          printf(" ");
//         }
//         for(int j = 1; j <= k; j++)
//         {
//             printf("%d ",j);
//         }
//         s--;
//         k++;
//         printf("\n");
//     }
//     return 0;
// }



//=========================================


// int main()
// {
//     int n, s, k;
//     scanf("%d",&n);
//     s = 0;
//     k = n;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
       
//         for(int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         s++;
//         k = k - 2;
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int n, s, k;
    scanf("%d",&n);
    s = 0;
    k = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= s; j++)
        {
         printf("  ");
        }
        for(int j = 1; j <= k; j++)
        {
            printf("%d ",j);
        }
        s++;
        k = k - 2;
        printf("\n");
    }
    return 0;
}



// int main()
// {
//     int n, s, k;
//     scanf("%d",&n);
//     s = 0;
//     k = n;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= s; j++)
//         {
//          printf(" ");
//         }
//         for(int j = k; j >= 1; j--)
//         {
//             printf("%d ",j);
//         }
//         s++;
//         k--;;
//         printf("\n");
//     }
//     return 0;
// }










