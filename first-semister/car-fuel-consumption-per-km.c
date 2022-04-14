#include<stdio.h>

int main(){
    int X;
    float Y, distance;
    scanf("%d %f", &X, &Y);
    distance = X / Y;
    printf("%.3f km/l\n", distance);
    return 0;
}
