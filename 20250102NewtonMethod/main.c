#include <stdio.h>
#include <math.h>

double NewtonMethod_to_root_of_square(double y_true) {
    double x0 = 1,y = x0*x0;
    while (fabs(y-y_true) > 1e-5) {
        x0 = 0.5*(x0 + y_true/x0);
        y = x0*x0;
    }
    return x0;
}

int main(void) {
    double y_true = 2;
    printf("%.4f\n",NewtonMethod_to_root_of_square(y_true));
    return 0;
}