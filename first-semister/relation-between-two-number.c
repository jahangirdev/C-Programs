#include<stdio.h>
int main(){
    int i, t, a[14], b[14];
    scanf("%d", &t);
    for(i = 0; i< t; i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    for(i = 0; i<t; i++){
        if(a[i]>b[i]){
            printf(">\n");
        }
        else if(a[i]<b[i]){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
    return 0;
}
