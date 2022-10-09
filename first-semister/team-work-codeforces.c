#include<stdio.h>
int main(){
    int n, i, totalSol = 0;
    scanf("%d", &n);
    int knowSolutions[n][3];
    for(i = 0; i<n; i++){
        scanf("%d %d %d", &knowSolutions[i][0], &knowSolutions[i][1], &knowSolutions[i][2]);
    }
    for(i = 0; i<n; i++){
        if(knowSolutions[i][0]+knowSolutions[i][1]+ knowSolutions[i][2] >=2) totalSol++;
    }
    printf("%d\n", totalSol);
}
