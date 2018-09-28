k#include <stdio.h>
int main ()
{
    int day, bug, total=0;

    for (day=1; day<=7; day++){
        printf ("\nNumber of bugs collected in day %d: ",day);
        scanf ("%d", &bug);
        total = total+bug;

        printf ("\nTotal number of bugs collected: %d\n", total);
    }
    //printf ("\nTotal number of bugs collected: %d", total);

    return 0;
}

