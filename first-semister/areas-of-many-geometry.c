#include<stdio.h>
#define PI 3.14159

int main() {
    double A, B, C, triangle, circle, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangle = 0.5 * A * C;
    circle = PI * C * C;
    trapezium = ((A + B) / 2) * C;
    square = B * B;
    rectangle = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);
    return 0;

}
