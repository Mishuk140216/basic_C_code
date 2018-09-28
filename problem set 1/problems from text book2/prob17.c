#include <stdio.h>
#include <conio.h>
int main()
{
    int part1, part2, part3 ;
    printf("enter three digit number:\n");
    scanf("%1d%1d%1d", &part1,&part2,&part3);
    printf("The reversal is %d%d%d", part3, part2, part1);

    getch();
    return 0;
}
