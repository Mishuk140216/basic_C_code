#include<stdio.h>
#include<conio.h>

int main()
{
    int  miles, gallon, mpg;

    printf("Enter number of miles driven ");
    scanf("\n%d", &miles);

    printf("Enter number of gallon used ");
    scanf("\n%d", &gallon);

    mpg = miles * gallon;
    printf("MPG of the car is %d", mpg);


    getch ();
    return 0;
}


