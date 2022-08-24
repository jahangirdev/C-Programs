#include<stdio.h>
int prime[51], i, n;
void main(){
    for(i = 2; i*i<=50; i++){
        if(prime[i]==0){
            for(int  j = i*i; j<=50; j+=i){
                prime[j] = 1;
            }
        }
    }
    prime[0] = 1;
    prime[1] = 1;
    prime[2] = 0;
    for(i = 0; i<=50; i++){
        if(prime[i]==0){
            printf("%d ", i);
        }
    }
}
