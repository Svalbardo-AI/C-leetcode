#include <stdio.h>
#include <stdlib.h>

int *Cal_Fibs(int n) {
    int *fibs;
    fibs = (int *)malloc(sizeof(int) * n);
    fibs[0] = 1;
    fibs[1] = 1;
    for (int i = 2; i < n; i++) {fibs[i] = fibs[i - 1] + fibs[i - 2];}
    return fibs;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int *fibs = Cal_Fibs(n);
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum += fibs[i];
    }
    printf("%d\n",sum);
    // printf("Hello, World!\n");
    return 0;
}