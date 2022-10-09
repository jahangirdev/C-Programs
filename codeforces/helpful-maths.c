#include<stdio.h>
long int numbers[50];
int main(){
    char str[100], *p = str;
    long i, j, temp, *ptr = numbers;
    scanf("%s", p);
    i = 0;
    while (*p) { // While there are more characters to process...
        if ( isdigit(*p) || ( (*p=='-'||*p=='+') && isdigit(*(p+1)) )) {
            // Found a number
            long val = strtol(p, &p, 10); // Read number
            ptr[i] = val; // and store it.
            i++;
        } else {
            // Otherwise, move on to the next character.
            p++;
        }
    }
    for(i = 0; i<50; i++){
        for(j = i+1; j<50; j++){
            if(numbers[i]>numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for(i = 0; i<50; i++){
        if(numbers[i]!=0){
            if(i!= 0){
                printf("+%ld", *ptr);
            }
            else{
                printf("%ld", *ptr);
            }
            ptr++;
        }
    }
}
