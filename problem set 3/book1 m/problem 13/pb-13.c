#include <stdio.h>
int main ()
{
    int bm, itm, m, exp, tmoney=0;
    printf ("Enter your budget: ");
    scanf ("%d", &bm);

    printf ("Enter the number of expense item ");
    scanf ("%d", &itm);

    for (m=1; m<= itm; m++){
        printf ("\nEnter the no %d expense ", m);
        scanf ("%d", &exp);
        tmoney = tmoney + exp;
        printf ("Total money is %d\n", tmoney);
    }
    if (tmoney<bm)
        printf("It's an under budget...U can spend more\n");
    else if (tmoney>bm)
        printf ("It's an over budget...Be frugal\n");
    else if (tmoney = bm)
        printf ("Bravo!! It's a precise budget\n");

    return 0;
}

