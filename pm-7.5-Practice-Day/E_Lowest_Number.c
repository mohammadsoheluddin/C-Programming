#include<stdio.h>
#include<limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    long long int lowest = INT_MAX;
    int lowest_index = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] < lowest) {
            lowest = A[i];
            lowest_index = i+1;
        }
    }

    if (lowest_index != -1) {
        printf("%lld %d", lowest, lowest_index);
    } 
    return 0;
}
