#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int count;
    printf("\nfirst loop\n\t\a");
    for(count=5;count>=1;count--)
    {
        printf("%d, ", count);

    }
    printf("\nsecond loop\n\t\a");
    for(count=10;count>=1;count--)
    {
        printf("%d, ", count);

    }
    printf("\nthird loop\n\t\a");
    for(count=1;count>=10;count--)
    {
        printf("%d, ", count);

    }

    getch();

}

