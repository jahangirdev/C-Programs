#include<stdio.h>
int main(){
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    strlwr(str1);
    strlwr(str2);
    if(strcmp(str1, str2)>=1){
        printf("1\n");
    }
    else if(strcmp(str1, str2)<=-1){
        printf("-1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}
