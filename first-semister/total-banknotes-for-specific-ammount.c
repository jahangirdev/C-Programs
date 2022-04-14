#include<stdio.h>

int main() {
    int notes[7] = {100, 50, 20, 10, 5, 2, 1}, amount, newAmount = 0, i;
    scanf("%d", &amount);
    printf("%d\n", amount);
    int specificNotes = 0;
    for( i = 0; i < 7; i++){
        while((newAmount + notes[i]) <= amount){
            newAmount += notes[i];
            specificNotes++;
        }
        printf("%d nota (s) de R$ %d,00\n", specificNotes, notes[i]);
        specificNotes = 0;
    }
    return 0;
}
