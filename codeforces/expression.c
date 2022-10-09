#include<stdio.h>
int main(){
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    if(a>1 && b>1 && c>1){
        result = a*b*c;
        printf("%d", result);
        return 0;
    }
    else if(a>b && a>c){
        result = a*(b+c);
        printf("%d", result);
        return 0;
    }
    else if(b>a && b>c){
        result = b*(a+c);
        printf("%d", result);
        return 0;
    }
    else if(c>a && c>b){
        result = c*(a+b);
        printf("%d", result);
        return 0;
    }
    else{
        result = a+b+c;
        printf("%d", result);
        return 0;
    }
}
