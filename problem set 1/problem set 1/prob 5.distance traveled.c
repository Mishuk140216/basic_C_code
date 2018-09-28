#include <stdio.h>
#include <conio.h>
int main()
{
    int distance, speed, time;
    speed=60;
    time=5;
    distance=speed*time;
    printf("when the car will travel 5 hours , the ditance is %d\n", distance);
    time=8;
    distance=speed*time;
    printf("when the car will travel 8 hours , the ditance is %d\n", distance);
    time=12;
    distance=speed*time;
    printf("when the car will travel 12 hours , the ditance is %d\n", distance);
    getch();

    return 0;
}
