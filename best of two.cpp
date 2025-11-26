#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    // Put Alice's rolls into an array
    int A[3] = {A1, A2, A3};
    int B[3] = {B1, B2, B3};

    // Sort Alice's rolls (simple bubble sort since only 3 numbers)
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(A[j] > A[i]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Sort Bob's rolls
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(B[j] > B[i]){
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Highest 2 rolls sum
    int alice_score = A[0] + A[1];
    int bob_score = B[0] + B[1];

    // Compare scores
    if (alice_score > bob_score)
        printf("Alice");
    else if (bob_score > alice_score)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}

