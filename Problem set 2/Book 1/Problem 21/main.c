#include <stdio.h>
int main()
{
    int second, minute, hour, day;
    printf ("Enter the seconds\n");
    scanf ("%d", &second);

    if (second >= 60&& second <= 3599){
        minute = second / 60;
        printf ("%d minute", minute);
    }
    else if (second >= 3600 && second <= 86399){
        hour = second / 3600;
        printf ("%d hour", hour);
    }
    else if (second >= 86400){
        day = second / 86400;
        printf ("%d day", day);
    }
    else {
        printf ("sorry!! I'm disabled");
    }

    return 0;
}
