#include<stdio.h>
#define PI 3.14159
int main() {
    float R, A;
    scanf("%f", &R);
    A = PI*R*R;
    printf("A=%.4f\n", A);

    return 0;
}
