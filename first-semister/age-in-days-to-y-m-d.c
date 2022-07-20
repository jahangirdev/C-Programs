#include<stdio.h>

int main(){
    int days, y, m, d;
    scanf("%d", &days);
    y = floor(days / 365);
    m = floor((days % 365) / 30);
    d = (days % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}
