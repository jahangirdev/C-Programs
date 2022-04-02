#include<stdio.h>

int main(){
    int code_1, unit_1, code_2, unit_2;
    float unit_price_1, product_price_1, unit_price_2, product_price_2, total_price;
    scanf("%d %d %f", &code_1, &unit_1, &unit_price_1);
    scanf("%d %d %f", &code_2, &unit_2, &unit_price_2);
    product_price_1 = unit_1 * unit_price_1;
    product_price_2 = unit_2 * unit_price_2;
    total_price = product_price_1 + product_price_2;
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);
    return 0;

}
