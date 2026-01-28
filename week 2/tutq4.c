#include <stdio.h>
#include <math.h>

int main() {
    float x;
    scanf("%f", &x);

    float e_val = 1;

    float numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= 10; i++) {
        numerator *= x;
        denominator *= i;
        e_val += numerator / denominator;
    }

    printf("Result = %.2f\n", e_val);

    return 0;
}