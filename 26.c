#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("Result: %lf\n", power(base, exponent));

    return 0;
}

