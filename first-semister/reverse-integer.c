#include<stdio.h>
int main()
{
    char num[20], reversedNum[20];
    int i, j = 0, length;
    gets(num);
    for(length = 0; num[length] != '\0'; length++);
    for(i=length;i>=0; i--)
        {
            reversedNum[j] = num[i-1];
            j++;
        }
        puts(reversedNum);
    return 0;
}
