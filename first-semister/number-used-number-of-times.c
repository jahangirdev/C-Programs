#include<stdio.h>
int main(){
    int N, tempN, count=100, i, j, used[10][2] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}};
    scanf("%d", &N);
    if(count!=0){
        int numberArray[count];
        count = 0;
        tempN = N;

        while(tempN != 0){
           numberArray[count] = tempN % 10;
           tempN /= 10;
           count++;
        }
        for( i = count-1; i>=0; i--){
            for(j = 9; j>=0; j--){
                if(numberArray[i]==j){
                used[j][1]++;
                }
            }
        }
        for(i = 0; i<10; i++){
            if (used[0][1] < used[i][1]){
              used[0][0] = used[i][0];
              used[0][1] = used[i][1];
            }
        }
        printf("%d", used[0][0]);
    }
    return 0;
}
