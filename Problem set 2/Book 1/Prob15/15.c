#include <stdio.h>

int main()
{
    char c1, c2;
    printf ("Enter the colours\n");
    scanf ("%c %c", &c1, &c2);

    if (c1== "r" && c2== "b"){
        printf ("purple");
    }
    else printf ("0");



    return 0;
}
