#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        
        int A[N], B[N];
        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        for(int i = 0; i < N; i++) {
            B[i] = A[i];
        }

        for(int i = 0; i < N - 1; i++) {
            for(int j = 0; j < N - i - 1; j++) {
                if(B[j] > B[j+1]) {
                    int temp = B[j];
                    B[j] = B[j+1];
                    B[j+1] = temp;
                }
            }
        }
        
        int C[N];
        for(int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }

        for(int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }  
    return 0;
}
