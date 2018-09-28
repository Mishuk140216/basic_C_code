#include<stdio.h>
#include<conio.h>

void square_num(void)
{
    int i, num;
    printf("\n\nNUMBER   SQUARE\n");
    for( num=1; num <= 100; num++)
        printf(" %3d      %3d\n", num, num*num);
}

void cube_num(void)
{
    int i, num;
    printf("\n\nNUMBER   CUBE\n");
    for( num=1; num <= 100; num++)
        printf("%3d     %4d\n", num, num*num*num);
}
void main (void)
{
    printf("\n\nPress any key to see squre number from 1 to 100.");
    getch();
    square_num();

    printf("\n\nPress any key to see cube number from 1 to 100.");
    getch();
    cube_num();
    getch ();

    return 0;
}
