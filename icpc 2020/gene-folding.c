#include<stdio.h>
int main(){
    char s[1000000];
    int i, count = 0, base[4] = {0, 0, 0, 0};
    gets(s);
    for(i = 0; i<strlen(s); i++){
        switch(s[i]){
            case 'A':
                base[0]++;
                break;
            case 'C':
                base[1]++;
                break;
            case 'G':
                base[2]++;
                break;
            case 'T':
                base[3]++;
                break;

        }
    }
    for(i = 0; i<4; i++){
        count += floor(base[i]/2);
    }
    printf("%d", count);
    return 0;

}
