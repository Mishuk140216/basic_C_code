#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b,c;
    printf("enter the number between 0 and 32767:");
    scanf("%d", &a);
    printf("\nIn octal, your number is %.5o", a);

    getch();
    return 0;
}

