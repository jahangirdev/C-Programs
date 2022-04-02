#include<stdio.h>
int main(){
    int num, hours;
    float rate, salary;
    scanf("%d %d %f", &num, &hours, &rate);
    salary = hours * rate;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}
