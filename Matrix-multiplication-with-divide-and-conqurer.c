#include <stdio.h>

void multiply(int A[2][2], int B[2][2], int C[2][2]) {

    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];

    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];

    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];

    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
}

int main() {

    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    int C[2][2];

    multiply(A, B, C);

    printf("Result Matrix:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}