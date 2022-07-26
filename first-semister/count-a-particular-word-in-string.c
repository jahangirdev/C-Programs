#include<stdio.h>
void main(){
    char str[100], word[20], extractedWords[100][20];
    int i, j, count, matches=0;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter a word to search:\n");
    gets(word);
    for(i=0; i<strlen(str); i++){
        for(j=0; j<strlen(word); j++){
            if(str[i+j]==word[j]){
                matches++;
            }
        }
        if(matches>=strlen(word)){
            count++;
            matches = 0;
        }
    }
    printf("The word '%s' is used %d times", word, count);
}
