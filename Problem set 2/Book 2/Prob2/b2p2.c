#include<stdio.h>
int main()
{
    float radious, volume;
    printf("Enter Radious  ");
    scanf("%f", & radious);
    volume = (4*3.1416*radious*radious*radious)/3;
    printf("The Volume     %0.2f", volume);


    return 0;
}
