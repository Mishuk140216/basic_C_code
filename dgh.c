#include<stdio.h>
#include<conio.h>

int main ()
{
    int *p;
    p="1234";
    printf("%.2s\n", p);
    printf("%-12s\n", p);
    printf("%12s\n", p);
    printf("%10.2s\n", p);
    printf("%-12.6s\n", p);
    getch();
    return 0;
}
