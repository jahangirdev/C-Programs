#include <stdio.h>

int main(void)
{
  float money;
  int n_money = 0,temp,note;
  printf("Enter the money: ");
  scanf("%f", &money);
  n_money = money * 100;
  note=n_money/10000;
  printf("note 100 are %d\n",note);
temp= n_money%10000;
note=temp/5000;
printf("note 50 are %d\n",note);
temp=temp%5000;
note=temp/2000;
printf("note 20 are %d\n",note);
temp=temp%2000;
note=temp/1000;
printf("note 10 are %d\n",note);
temp=temp%1000;
note=temp/500;
printf("note 5 are %d\n",note);
temp=temp%500;
note=temp/200;
printf("note 2 are %d\n",note);
temp=temp%200;
note= temp/100;
printf("coin 1 are %d\n",note);
temp=temp%100;
note=temp/50;
printf("coin 0.5 are %d\n",note);
temp=temp%50;
note= temp/25;
printf("coin 0.25 are %d\n",note);
temp=temp%25;
note= temp/10;
printf("coin 0.10 are %d\n",note);
temp=temp%10;
note= temp/5;
printf("coin 0.05 are %d\n",note);
temp=temp%5;
note= temp/1;
printf("coin 0.01 are %d\n",note);





}
