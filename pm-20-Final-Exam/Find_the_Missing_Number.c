#include<stdio.h>
#include<string.h>

// int main() {
//     int T;
//     scanf("%d", &T);
//     for(int i = 0; i < T; i++) {
//         int numbers[4];
//         for(long long int j = 0; j < 4; j++) 
//         {
//             scanf("%d", &numbers[j]);
//         }
//         long long int missingNumber = numbers[0] / (numbers[1] * numbers[2] * numbers[3]);
//         if(missingNumber * numbers[1] * numbers[2] * numbers[3] != numbers[0] || 
//         numbers[0]%(numbers[1] * numbers[2] * numbers[3] !=0) || 
//         numbers[1] == 0 || numbers[1] == 0 || numbers[1] == 0)
//         {
//             printf("-1\n");
//             continue;
//         }
//         else
//         {
//             printf("%lld\n", missingNumber);
//         }
//     }  
//     return 0;
// }



int main() {
    int T;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++) {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
        if (A == 0 || B == 0 || C == 0) {
            printf("-1\n");
            continue;
        }
        long long int missingNumber = M / (A * B * C);
        
        if (missingNumber * A * B * C != M) {
            printf("-1\n");
            continue;
        }
        printf("%lld\n", missingNumber);
    }
    return 0;
}

