#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
    for(i=1;i<=3;++i)
    {
        printf("\nI is now %d\n", i);
        for(j=1;j<=4;j++)
            printf("j=%d", j);
    }
    getch();
}
