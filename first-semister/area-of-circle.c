/*
Program to calculate the area of a circle by radius.
*/
#include<stdio.h>
#define PI 3.1416
void main(){
    float area = 0.0, radius = 0.0;
    printf("Enter the radius (meter):\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of circle is: %.2f square meter", area);
}
