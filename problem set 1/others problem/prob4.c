#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float s, area;
    printf("enter the lengths of a triangle:\n");
    scanf("%d%d%d", &a,&b,&c);

    printf("s=%f", s);
    area=sqrt(s*(s- a)*(s - b)*(s - c));
    printf("the area of the triangle is %f", area);

    getch();
    return 0;
}
