#include <stdio.h>
int main ()
{
    float sem,tution=6000.00;


    for (sem=1; sem<=10; sem++)
    {
         tution = tution + (tution*.01);
         printf ("Semester %.0f tution is $%.2f\n", sem, tution);
    }

    return 0;
}

