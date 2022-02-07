#include<stdio.h>
int main(){
    int f;
    float c;
    printf("Enter fahrenheit value:");
    scanf("%d", &f);

    //calculate celsius value
    c = 5*((float)f-32)/9;

    //print the Celsius value
    printf("The Celsius value is: %.2f", c);
    return 0;
}
