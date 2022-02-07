#include<stdio.h>
#include<math.h>
int main(){
    int a, b , c, p;
    float s, area;
    printf("Enter the values of 3 sides:\n");
    //input 3 sides
    scanf("%d %d %d", &a, &b, &c);
    //calculate perimeter
    p = a+b+c;
    //calculate half of perimeter
    s = p/2;
    //calculate area of triangle
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    //print the area and perimeter
    printf("The area of the triangle is: %f square units\n", area);
    printf("The perimeter of the triangle is %d units", p);
    return 0;
}
