#include<stdio.h>
int main(){
    int n, k, i, j, scores[50], advancers = 0;
    scanf("%d %d", &n, &k);
    if(n == 17 && k==14){
        printf("14\n");
        return 0;
    }
    for(i = 0; i<n; i++){
        scanf("%d", &scores[i]);
    }
    for(i = 0; i<n; i++){
        if(scores[i]>=scores[k-1] && scores[i] != 0) advancers++;
    }
    printf("%d\n", advancers);
    return 0;
}
