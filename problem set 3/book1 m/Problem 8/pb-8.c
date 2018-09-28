#include <stdio.h>
int main ()
{
    char sure;

    //scanf ("%c", &sure);


    while (sure !='Y' && sure!='y'){

        printf ("\nAre you sure you want to quit?\n");
        sure= getche();
    }

    return 0;
}

