#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main ()
{
    int random,guess;
    srand (time(NULL));
    random = 0+ rand()%99;
    printf("This is a number guessing game:\n");

    do{

        printf ("\nEnter Your number:");
        scanf ("%d", &guess);
        if (guess<random){printf ("\nYour guess is lower,enter again.\n");}
        else if (guess>random) {printf ("\nYour guess is higher,enter again.\n");}
    }while (guess!=random);

    printf ("\nYou Win!!");
    getch();
    return main ();
}
