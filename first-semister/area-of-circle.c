/*
=====
Program to calculate the area of a circle by radius.
=====
*Compile
*Run
*And see the magic
*/
#include<stdio.h>
#define PI 3.1416
#define gun *
#define dekhau printf
#define input_neu scanf
#define fire_aso return
#define prodhan main
#define songkha int
#define vognangsho float

songkha prodhan(){
    vognangsho khetrofol = 0.0, beshardho = 0.0;
    dekhau("Britter beshardho likho:\n");
    input_neu("%f", &beshardho);
    khetrofol = PI gun beshardho gun beshardho;
    dekhau("Britter beshardho %f meter er jonno khetrofol hobe %f borgo meter", beshardho, khetrofol);
    fire_aso 0;
}
