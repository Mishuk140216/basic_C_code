#include <stdio.h>

int main()
{
    int selection;
    scanf ("%d", &selection);

    switch (selection)
    {
        case 1: printf ("You selected %d.", selection);
                break;
        case 2: printf ("You selected %d.", selection);
                break;
        case 3: printf ("You selected %d.", selection);
                break;
        case 4: printf ("You selected %d.", selection);
                break;
        default : printf ("not good with numbers, eh?");
    }

    return 0;
}
