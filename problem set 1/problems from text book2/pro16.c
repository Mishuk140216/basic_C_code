#include <stdio.h>
#include <conio.h>
int main()
{
    int main, part1, part2, part3, reverse;
    printf("Enter a three digit number:\n");
    scanf("%3d", &main);
    part1=main/100;
    part2=(main%100)/10;
    part3=(main%100)%10;

    reverse=part3*100+part2*10+part1;
    printf("The reversal is %d\n", reverse);

    getch();
    return 0;
}
