#include <stdio.h>
#include <stdlib.h>
#define size 10

void Multiply(int x[size][size], int y[size][size], int z[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
}

void Sum(int x[size][size], int y[size][size], int z[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
}
void Print(int x[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}
void Zerolize(int x[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            x[i][j] = 0;
        }
    }
}
int main(void) {
    int matrix_1[size][size] = {0},matrix_2[size][size] = {0},matrix_3[size][size] = {0};
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix_1[i][j] = 1;
            matrix_2[i][j] = 2;
        }
    }
    Sum(matrix_1, matrix_2, matrix_3);
    Print(matrix_3);

    Zerolize(matrix_3);

    Multiply(matrix_1, matrix_2, matrix_3);
    Print(matrix_3);

    return 0;
}
