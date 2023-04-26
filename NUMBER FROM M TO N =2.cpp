#include <stdio.h>

int main() {
    int M, N, K;
    printf("Enter the starting number (M): ");
    scanf("%d", &M);
    printf("Enter the ending number (N): ");
    scanf("%d", &N);
    printf("Enter the number of steps to skip (K): ");
    scanf("%d", &K);
    
    for(int i = M; i <= N; i += K+1) {
        printf("%d ", i);
    }

    return 0;
}
