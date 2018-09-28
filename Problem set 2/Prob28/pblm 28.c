#include<stdio.h>
#include<conio.h>

int main ()
{
    int num, a1, a2, a3, a4;

    printf("Enter the number");
    scanf("%d", &num);

    a1 =(num - num/8);
    a2 = (num - num - a2 * 8)/8;
    a4 = (num - a1 * 8 - a2 * 8 - a3 * 8)/8;


    printf("The octal number is : %d%d%d%d", a4, a3, a2, a1);

    getch ();
    return 0;
}
