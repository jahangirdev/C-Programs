#include<stdio.h>
void main(){
    char name[50];
    printf("Enter your name:\n");
    gets(name);
    strrev(name);
    puts(name);
}
