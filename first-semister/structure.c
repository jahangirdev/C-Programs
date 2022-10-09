#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[20], dept[50], section;
        int roll;
    };
    struct student st1, st2, st3;
    strcpy(st1.name, "Jahangir Alam");
    strcpy(st1.dept, "CSE");
    st1.section = 'B';
    st1.roll = 1;
    printf("%s\n", st1.name);
    return 0;
}
