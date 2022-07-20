#include<stdio.h>
int main(){
    int i, n;
    float sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum += 1/(float)i;
    printf("Sum is: %f", sum);
    return 0;
}
