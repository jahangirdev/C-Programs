/*
Name: Jahangir Alam
Department: CSE
ID: 001
*/
//link section
#include<stdio.h>

//main function
void main(){
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    start:

    if(n!=0 && n!=1){
        if(n&1){
            n = 3 * n + 1;
        }
        else{
            n = n / 2;
        }
        printf("%d\n", n);
        goto start;
    }
}
