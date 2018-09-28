#include <stdio.h>

int main()
{
    int amount1, amount2;
    printf ("Enter the first amount and 2nd amount\n");
    scanf ("%d%d", &amount1, &amount2);
    if (amount1 > 10 && amount2<100){
        if (amount1>amount2){
            printf ("the first amount %d is greater than second amount %d", amount1, amount2);
        }
        else{
            printf ("the second amount %d is greater than first amount %d", amount2, amount1);
        }
    }
    else {

        printf ("\nInvalid input");
    }
    return 0;
}
