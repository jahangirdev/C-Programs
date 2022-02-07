#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two number (a b):\n");
    scanf("%d %d", &a, &b);

    if(a>b) {
        printf("a = %d is the largest number", a);
    }
    else if(b>a) {
        printf("b = %d is the largest number", b);
    }
    else {
        printf("Values are not unique");
    }
    return 0;
}
