#include<stdio.h>
int main(){
    char name[20];
    double fixedSalary, totalSalary, sell;
    scanf("%s %lf %lf", &name, &fixedSalary, &sell);
    totalSalary = fixedSalary + (sell * 15/100);
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}
