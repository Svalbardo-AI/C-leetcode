#include <stdio.h>
#include <math.h>
#define N 100000
#define PI 3.1415926535

double Func_sin(double x) {
    return sin(x);
}

double Calculate(double a, double b) {
    int i=0;
    double width=(b-a)/N;
    double sum=0;
    while (i<N) {
        sum += Func_sin(a+i*width)*width;
        i++;
    }
    return sum;
}

int main(void) {
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%lf\n", Calculate(a, b));
    return 0;
}