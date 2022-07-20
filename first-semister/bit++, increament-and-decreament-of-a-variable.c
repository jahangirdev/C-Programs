#include<stdio.h>
#include<string.h>
int main(){
    int i, n, x = 0;
    char statements[150][10];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", &statements[i]);
    }
    for(i = 0; i < n; i++){
        if(strcmp(statements[i], "x++")==0 || strcmp(statements[i], "X++")==0 || strcmp(statements[i], "++x")==0 || strcmp(statements[i], "++X")==0){
            x++;
        }
        else if(strcmp(statements[i], "x--")==0 || strcmp(statements[i], "X--")==0 || strcmp(statements[i], "--x")==0 || strcmp(statements[i], "--X")==0)
            x--;
    }
    printf("%d\n", x);
    return 0;
}
