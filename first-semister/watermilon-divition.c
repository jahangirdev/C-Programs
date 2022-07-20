#include<stdio.h>
int main(){
    int w, i = 2, n = 0;
    scanf("%d", &w);
    if(w % 2 == 0){
        while(i<w){
        if(i % 2 == 0){
            n++;
        }
        i++;
    }
    }
    if(n>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
