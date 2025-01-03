#include <stdio.h>
#include <time.h>

int HCF(int a, int b) {
    int HCF = b;
    while (HCF>2) {
        HCF--;
        if (a%HCF==0 && b%HCF==0) {
            return HCF;
        }
    }
    return -1;
}
int LCM(int a, int b) {
    int HCF_result = HCF(a, b);
    int i = a/HCF_result;
    while (1) {
        i++;
        int cache = i*HCF_result;
        if (cache%a==0 & cache%i==0) {
            return i*HCF_result;
        }
    }
}
int main(void) {
    clock_t start = clock();

    const int a = 42666312,b = 28887552;//默认a>b
    int HCF_result = HCF(a, b);
    int LCM_result = LCM(a, b);
    printf("HCF_result = %d\n", HCF_result);
    printf("LCM_result = %d\n", LCM_result);

    clock_t end = clock();
    double time_spent = (double) (end - start) / CLOCKS_PER_SEC;
    printf("Time taken by main = %f\n", time_spent);

    return 0;
}