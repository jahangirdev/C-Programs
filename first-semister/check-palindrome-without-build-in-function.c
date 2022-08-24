#include<stdio.h>
int main() {
    char S[100], revStr[100];
    int i, length = 0, temp = 0;
    scanf("%s", &S);
    for(length = 0; S[length] != '\0'; length++);
    for(i = 0; S[i] != '\0'; i++) {
        revStr[length-i-1] = S[i];
    }
    for(i = 0; i < length; i++){
        if(tolower(S[i]) == tolower(revStr[i]))
            temp++;
    }
    if(temp == length){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
