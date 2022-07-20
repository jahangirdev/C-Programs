#include<stdio.h>
int main(){
    int i, n, k, scores[100], participent = 0;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &scores[i]);
    }
    for(i=0; i<n; i++){
        if(scores[i] >= scores[k-1] && scores[i]>0){
            participent++;
        }
    }
    printf("%d\n", participent);
    return 0;
}
