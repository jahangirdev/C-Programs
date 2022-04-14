#include<stdio.h>

int main(){
    int time, avgSpeed;
    double fuelSpent;
    scanf("%d %d", &time, &avgSpeed);
    fuelSpent = (float)time * avgSpeed / 12;
    printf("%.3lf\n", fuelSpent);
    return 0;
}
