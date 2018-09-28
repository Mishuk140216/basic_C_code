#include <stdio.h>
#include <stdlib.h>

#define N 80

int main()
{
    char name[N], ch;
    int i=0;

    printf("Please enter your name:");
    if(ch = getchar()==' ')
    {

    while((ch = getchar()) == ' ')
        break;
    }
    while((ch = getchar())!='\n')
    {
        if( i < N )
        {
            name[i++] = ch;
        }
    }
    name[i] = '\0';

    puts(name);

    return 0;
}
