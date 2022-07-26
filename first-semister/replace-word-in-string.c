#include<stdio.h>
int main(){
    char str[200], replaceWord[30], replaceWith[30];
    int i, j, k, letterMatches = 0;
    printf("Enter a string:\n");
    gets(str);
    printf("Word to replace:\n");
    gets(replaceWord);
    printf("Replace With:\n");
    gets(replaceWith);

    for(i=0; i<strlen(str); i++){
            for(j=0; j<strlen(replaceWord); j++){
                if(str[i+j]==replaceWord[j]){
                    letterMatches++;
                }
            }
            if(letterMatches>=strlen(replaceWord)){
                for(j=0; j<strlen(replaceWith); j++){
                    str[i+j] = replaceWith[j];
                }
                letterMatches=0;
            }
    }
    puts(str);
    return 0;
}
