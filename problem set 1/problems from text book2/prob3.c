#include <stdio.h>
#include <conio.h>
int main()
{
    int r;
    float v;
    //r=radius, v=volume;
    printf("Enter the radius\n");
    scanf("%d", &r);
    v=(4.0f/3.0f)*3.1416*r*r*r;
    printf("The volume of sphere is %f", v);

    getch();
    return 0;
}
