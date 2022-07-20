#include<stdio.h>
void main(){
    char str[50], revStr[50];
    printf("Enter a string\n");
    gets(str);
    strcpy(revStr, str);
    strrev(revStr);
    if(strcmp(str, revStr) == 0){
        printf("The string is palindrome.");
    }
    else{
        printf("The string is not palindrome");
    }
}
