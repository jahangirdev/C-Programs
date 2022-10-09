#include<stdio.h>
int main(){
    long T;
    int A[1000], B[1000], C[1000], K[1000], i, j;
    scanf("%ld", &T);
    for(i = 0; i<T; i++){
        scanf("%d %d %d %d", &A[i], &B[i], &C[i], &K[i]);
    }
    for(i = 0; i<T; i++){

        for(j=0; j<1000; j++){
            if(A[i]==B[i] && A[i]==C[i]){
                printf("Case %d: Peaceful\n", i+1);
                break;
            }
            if(A[i]>B[i] && A[i]>C[i]){
                if(B[i]>C[i]){
                    A[i]-=K[i];
                    C[i]+=K[i];
                }
                else{
                    A[i]-=K[i];
                    B[i]+=K[i];
                }
            }
            else if(B[i]>A[i] && B[i]>C[i]){
                if(A[i]>C[i]){
                    B[i]-=K[i];
                    C[i]+=K[i];
                }
                else{
                    B[i]-=K[i];
                    A[i]+=K[i];
                }
            }
            else if(A[i]==B[i] && C[i]>A[i]){
                C[i]-=K[i];
                A[i]+=K[i];
            }
            else{
                if(B[i]>A[i]){
                    C[i]-=K[i];
                    B[i]+=K[i];
                }
                else{
                    C[i]-=K[i];
                    A[i]+=K[i];
                }
            }

        }
        if(A[i]!=B[i] || A[i]!=C[i]){
            printf("Case %d: Fight\n", i+1);
        }

    }
    return 0;
}
