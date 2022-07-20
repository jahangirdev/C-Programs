#include<stdio.h>
#include<math.h>
int main(){
    int i, noteCoinQuantity, bankNotes[6] = {100, 50, 20, 10, 5, 2};
    float N, tempMoney, coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    scanf("%f", &N);
    tempMoney = N;

    //calculating notes
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++){
        noteCoinQuantity = floor(tempMoney / bankNotes[i]);
        noteCoinQuantity = noteCoinQuantity < 1 ? 0 : noteCoinQuantity;
        tempMoney -= noteCoinQuantity * bankNotes[i];
        printf("%d nota(s) de R$ %d.00\n", noteCoinQuantity, bankNotes[i]);
    }

    //calculating coins
    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++){
        noteCoinQuantity = floor(tempMoney / coins[i]);
        noteCoinQuantity = noteCoinQuantity < 1 ? 0 : noteCoinQuantity;
        tempMoney -= noteCoinQuantity * coins[i];
        printf("%d nota(s) de R$ %.2f\n", noteCoinQuantity, coins[i]);
    }
    return 0;
}
