#include<stdio.h>
#include<conio.h>

int main()
{
    int speed, time, distance;

    speed = 60;
    time =5 ;
    distance = speed * time;

    printf("The distance is \n%d", distance);
     time = 8;
    distance = speed * time;

    printf("\nThe distance is \n%d", distance);
     time =12 ;
    distance = speed * time;

    printf("\nThe distance is \n%d", distance);



    getch ();
    return 0;
}
