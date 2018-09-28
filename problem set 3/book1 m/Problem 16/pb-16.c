#include<stdio.h>
#include<windows.h>

int main ()
{
    int time, speed, hour, ds;
    printf("What s the speed of the vehicle in mph?  ");
    scanf("%d", &speed);
    printf("\nHow many hours has it traveled?  ");
    scanf("%d", &time);
     printf("Hour\t\t\tDstance Traveled\n");
    for(hour=1;hour<=time;hour++){

        ds=speed*hour;
        printf("%d\t\t\t\t%d\n", hour, ds);
    }
    return 0;
}
