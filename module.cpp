#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Apply 10% discount on online order
    float online_cost = N - (N * 0.10);

    if (online_cost < M) {
        printf("ONLINE");
    }
    else if (online_cost > M) {
        printf("DINING");
    }
    else {
        printf("EITHER");
    }

    return 0;
}

