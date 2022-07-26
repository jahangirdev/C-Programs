#include<stdio.h>
void main(){
    char str[100], extractedStr[100];
    int i, j, n, m;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter the starting point (character position)\n");
    scanf("%d", &n);
    printf("How much character do you want to extract?\n");
    scanf("%d", &m);
    for(i=n-1, j=0; i<m-1; i++, j++){
        extractedStr[j] = str[i];
    }
    puts(extractedStr);
}
