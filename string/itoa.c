#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    int a;
    char b[20];
    printf("Enter number\n");
    scanf("%d", &a);
    printf("The number =%d\n", a);
    itoa(a, b, 2);
    printf("Binary value =%s\n", b);
    itoa(a, b, 10);
    printf("decimal value =%s\n", b);
    itoa(a, b, 16);
    printf("haexadecimal value =%s\n", b);

    return 0;
}
