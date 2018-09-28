#include <stdio.h>
#include <conio.h>
int main()
{
    int main, part1, part2, reverse;
    printf("Enter a two digit number:\n");
    scanf("%2d", &main);
    part1=main%10;
    part2=main/10;
    reverse=part1*10+part2;
    printf("The reversal is %d\n", reverse);

    getch();
    return 0;
}
