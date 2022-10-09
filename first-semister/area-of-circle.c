#include<stdio.h>
#define PI 3.14159
int main() {
    float R, A;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &R);
    A = PI*R*R;
    printf("Area of the circle is %.4f\n", A);
    return 0;
}
