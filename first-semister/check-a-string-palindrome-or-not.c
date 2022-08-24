#include<stdio.h>
#include<string.h>
void main(){
    char S[100], revStr[100];
    printf("Enter a string\n");
    fgets(S);
    strcpy(revStr, S);
    strrev(revStr);
    if(strcmp(S, revStr) == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
