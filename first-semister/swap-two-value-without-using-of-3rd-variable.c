#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a & b:");
    scanf("%d %d", &a, &b);

    //add two variable and store in a
    a = a+b;

    //subtract b from a and store in b

    b = a-b;

    //subtract b from a and store in a
    a = a-b;

    //print the swap values
    printf("Swap values are a = %d, b = %d", a, b);
}
