#include <stdio.h>
int main()
{
    int distance, speed, time;
    speed=60;
    printf("enter the time\n");
    scanf("%d", &time);
    distance=speed*time;
    printf("when the car will travel %d hours , the ditance is %d\n", time, distance);
    main();
    return 0;

    }
