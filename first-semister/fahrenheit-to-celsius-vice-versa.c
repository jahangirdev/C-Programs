/*
A program to convert temperature from fahrenheit to celsius and celsius to fahrenheit
Author: Jahangir Alam
Department: CSE
Semester: 1st
Student Id: 001
*/

#include<stdio.h>
void main(){
    float temperature = 0.0,
            convertedTem = 0.0;
    int temType;
    printf("Which converter do you want to use? (type 1 or 2)\n1. Celsius to fahrenheit\n2. Fahrenheit to celsius\n");
    scanf("%d", &temType);

    switch(temType){
        case 1:
            printf("Enter the celsius value\n");
            scanf("%f", &temperature);
            convertedTem = ( temperature * 9 / 5 ) + 32;
            printf("Fahrenheit value is: %.2f\n", convertedTem);
            break;

        case 2:
            printf("Enter the fahrenheit value\n");
            scanf("%f", &temperature);
            convertedTem = ( temperature - 32 ) * 5 / 9;
            printf("Celsius value is: %.2f\n", convertedTem);
            break;

        default:
            printf("You didn't input right value.\n");
    }
}
