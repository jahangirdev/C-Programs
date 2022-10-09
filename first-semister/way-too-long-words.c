#include<stdio.h>
int main(){
    int n, i, len;
    char words[100][200];
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%s", &words[i]);
    }
    for(i = 0; i<n; i++){
        len = strlen(words[i]) > 100 ? strlen(words[i]) % 100 : strlen(words[i]);
        if(len>10){
            printf("%c%d%c\n", words[i][0], len-2, words[i][len-1]);
        }
        else{
            printf("%s\n", words[i]);
        }
    }
    return 0;
}
