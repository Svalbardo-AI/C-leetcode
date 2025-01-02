#include <stdio.h>
#include <stdlib.h>

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
        if (p==0) {numbers[i]=i;printf("%d\t",i);}
    }
    free(numbers);
}

int main(void) {
    const int n = 1000;
    PrimeNumber(n);
    return 0;
}