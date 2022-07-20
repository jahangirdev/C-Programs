#include<stdio.h>
int main(){
    double A, B, C, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    if(B*B - 4*A*C < 0 || 2*A != 0){
        R1 = (-B + sqrt(B*B - 4*A*C)) / 2*A;
        R1 = (-B - sqrt(B*B - 4*A*C)) / 2*A;
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
