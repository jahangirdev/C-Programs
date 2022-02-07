#include<stdio.h>
int main() {
    int a, b, c;
    char action;
    printf("Enter number (a b c):\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c) {
        printf("a = %d is the largest value", a);
    }
    else if(b>a && b>c) {
        printf("b = %d is the largest value", b);
    }
    else if(c>a && c>b) {
        printf("c = %d is the largest value", c);
    }
    else {
        printf("Values are not unique");
    }
    return 0;
}
