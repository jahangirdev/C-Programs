#include <stdio.h>
int main(){
    int i, j, k, arr[4], count=0, size = 4;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i ++){

        for ( j = i + 1; j < size; j++){
            if ( arr[i] == arr[j]){

                for ( k = j; k < size; k++){

                    arr[k] = arr [k + 1];

                }
                count++;
                size--;
                j--;

            }

        }
    }

    printf("%d\n", count);
    return 0;
}
