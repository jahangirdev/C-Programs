#include<stdio.h>
int main(){
    int T, N[100], count = 0, i, j, k, l;
    scanf("%d", &T);
    for(i = 0; i<T; i++){
        scanf("%d", &N[i]);
    }
    for(i = 0; i<T; i++){
        for(j = 1; j<=N[i]/3; j++){
            for(k = 1; k<=N[i]/3; k++){
                for(l = 1; l<=N[i]/3; l++){
                    if(j+k+l==N[i]){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
        count=0;
    }
    return 0;
}
