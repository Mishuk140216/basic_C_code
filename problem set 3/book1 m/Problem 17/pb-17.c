#include <stdio.h>
int main ()
{
    int i,month,tmonth, yr, rainfall, trainfall=0, avgRainfall;

    printf ("Enter the year: ");
    scanf ("%d", &yr);
    for (i=1; i<= yr; i++){
        for (month=1; month<= 12; month++){

            printf ("Enter the rainfall of month %d: \n",month);
            scanf ("%d", &rainfall);
            trainfall= trainfall+rainfall;
        }

    }
    avgRainfall= trainfall/(yr*12);
    tmonth= yr*12;
    printf ("Total number of months: %d\n", tmonth);
    printf ("Total inches of rainfall: %d\n",trainfall);
    printf ("Average rainfall: %d", avgRainfall);

    return 0;
}

