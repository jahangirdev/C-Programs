#include<stdio.h>
int main(){
    int M, N, dominoes;
    scanf("%d %d", &M, &N);
    dominoes = M * N / 2;
    printf("%d\n", dominoes);
    return 0;
}

