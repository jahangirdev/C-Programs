#include<stdio.h>

int main(){
    int i, noteCoinQuantity = 0, bankNotes[6] = {10000, 5000, 2000, 1000, 500, 200};
    float N, tempMoney = 0, coins[6] = {100, 50, 25, 10, 5, 1};
    scanf("%f", &N);

    //calculating notes
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++){
        while(tempMoney + bankNotes[i] <= N * 100){
            tempMoney += bankNotes[i];
            noteCoinQuantity++;
        }
        printf("%d nota(s) de R$ %d.00\n", noteCoinQuantity, bankNotes[i]/100);
        noteCoinQuantity = 0;
    }

    //calculating coins
    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++){
        while(tempMoney + coins[i] <= N * 100){
            tempMoney += coins[i];
            noteCoinQuantity++;
        }
        printf("%d moeda(s) de R$ %.2f\n", noteCoinQuantity, coins[i]/100);
        noteCoinQuantity = 0;
    }
    return 0;
}
