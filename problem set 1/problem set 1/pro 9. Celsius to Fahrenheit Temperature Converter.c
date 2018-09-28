#include <stdio.h>
#include <conio.h>
int main()
{
    float Celsius,  Fahrenheit;
    printf("input the Celsius temperature\n");
    scanf("%f", &Celsius);
    Fahrenheit=1.8*Celsius+32;
    printf("the Fahrenheit temperature is %f\n",  Fahrenheit );
    getch();

    return 0;
}
