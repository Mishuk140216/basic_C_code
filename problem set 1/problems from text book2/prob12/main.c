#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter phone number (xxx) xxx-xxxx): \n");
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("you entered %d.%d.%d", a,b,c);

    getch();
    return 0;
}
