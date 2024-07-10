#include<stdio.h>
#include<string.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for(int t = 0; t < N; t++) {
        for(int i = 1; i <= K; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
