#include <stdio.h>
#include <conio.h>
int main()
{
    int main, part1,part2,part3,part4,part5, octal;
    printf("enter the number between 0 and 32767:");
    scanf("%d", &main);
    part1=main%8;
    part2=(main/8)%8;
    part3=((main/8)/8)%8;
    part4=(((main/8)/8)/8)%8;
    part5=((((main/8)/8)/8)/8)%8;
    printf("\nIn octal, your number is %d%d%d%d%d",part5,part4,part3,part2,part1);

    getch();
    return 0;
}
