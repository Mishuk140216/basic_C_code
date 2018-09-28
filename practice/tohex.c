#include <stdio.h>
#include <stdlib.h>

#define N 80

int main()
{
    char name[N] = "  Avijit Bhattacharjee";
    int i=0;

    while(name[i]!='\0')
        i++;
    //for (i = 0 ; name[i]!='\0'; i++)
    //;
    printf("%d", i+1);

    return 0;
}

