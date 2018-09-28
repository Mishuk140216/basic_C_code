#include <stdio.h>
int main()
{
    int speed, hour, i, distance;
    printf("What is the speed of the vehicle in mph? ");
    scanf("%d", &speed);
    printf("\nHow many hours has it traveled? ");
    scanf("%d", &hour);
    for(i=1; i<=hour ; i++){
        distance=speed*i;
        if(i==1){
            printf("\n\nHour\t\tDistance Traveled\n");
            printf("********************************************\n");
        }
        printf("%d\t\t%d\n", i, distance);


    }


    return 0;
}
