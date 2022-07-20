#include<stdio.h>
void main(){
    int numbers[100], i, sum = 0;
    for(i = 0; i<100; i++)
        numbers[i] = i+1;
    for(i = 0; i<100; i++){
        sum += numbers[i] % 7 == 0 ? numbers[i] : 0;
    }
    printf("The sum is %d\n", sum);
}
