#include<stdio.h>
int main() {
    int distance, time;
    scanf("%d", &distance);
    time = 60 * distance / (90-60);
    printf("%d minutos\n", time);
    return 0;
}
