#include<stdio.h>

void main(){
    int x[5], sum = 0;
    printf("Input 5 numbers...\n");
    for(int i = 0; i<5; i++){
        scanf("%d", &x[i]);
    }
    // sum of the values
    for(int j = 0; j<5; j++){
        sum += x[j];
    }
    printf("The sum of 5 numbers is %d\n", sum);
}
