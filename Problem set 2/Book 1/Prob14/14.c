#include <stdio.h>

int main()
{
    int month, date, year,mul;
    printf ("Enter the month date and year\n");
    scanf ("%d%d%2d",&month, &date, &year);
    mul= month*date;

    if (mul==year){                       //in pblm 1-13 somewhere I didn't put ==
        printf ("The date is magic.");
    }
    else {
            printf ("The date is not magic");
    }


    return 0;
}
