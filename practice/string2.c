#include <stdio.h>
#include <stdlib.h>

#define N 80

int main()
{
    char name[N], fName[N/2], lName[N/2] ;
    int i=0;

    printf("Please enter your name:");
    //scanf("%s%s", fName, lName);
    gets(name);

    puts(fName);
    puts(lName);
    printf("%s %s", lName, fName);

    return 0;
}

