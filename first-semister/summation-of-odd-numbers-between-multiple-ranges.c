#include<stdio.h>
int main(){
    int i, j, t, start[100], end[100], sum = 0;
    scanf("%d", &t);
    for(i = 0; i< t; i++){
        scanf("%d %d", &start[i], &end[i]);
    }
    for(i = 0; i<t; i++){
        for(j = start[i]; j<= end[i]; j++){
            if(j % 2 == 1){
                sum += j;
            }
        }
        printf("Case %d: %d\n", i+1, sum);
        sum = 0;
    }
    return 0;
}
