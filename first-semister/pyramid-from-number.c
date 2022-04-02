#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
COORD coord = {0, 0};
void gotoxy(int xAxis, int yAxis){
    coord.X = xAxis;
    coord.Y = yAxis + 1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main()
{
    int num,i,y,x=40;
    system("cls");
    printf("\nEnter a number for\ngenerating the pyramid:\n");
    scanf("%d",&num);
    for(y=0;y<=num;y++)
    {
        gotoxy(x,y);
        for(i=0-y;i<=y;i++)
        {
            printf("%3d",abs(i));
            x=x-3;

        }
    }
    getch();
}
