#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrimeNumber(const int n) {
    if (n < 0) return;
    int *numbers = malloc(n * sizeof(int*));
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    if (n <= 2){free(numbers);return;}
    int i =2;
    while (i < n-1) {
        int p=0;//用p=0来标识素数，p=1即非素数。
        int j=2;
        i++;
        while (j<i) {
            if (i%j==0) {p=1;break;}
            j++;
        }
        if (p==0) {numbers[i]=i;}
    }
    free(numbers);
}

void main() {
    clock_t begin = clock();
    const int n = 10000;
    PrimeNumber(n);
    clock_t end = clock();
    printf("Time taken by main: %f seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
}