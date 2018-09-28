#include<stdio.h>
#include <conio.h>
int main()
{
    int r=10;
    float v;
    //r=radius, v=volume
    v=(4.0f/3.0f)*3.1416*r*r*r;
    printf("The volume of sphere is %f", v);

    getch();
    return 0;
}
