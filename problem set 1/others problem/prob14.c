#include <stdio.h>
#include <conio.h>
int main()
{
    int main, hour, min, sec;
    printf("enter the time:\n");
    scanf("%d", &main);
    hour=main/3600;
    min=(main%3600)/60;
    sec=((main%3600)%60);
    printf(" the time is : %d:%d:%d",hour, min, sec );

    getch();
    return 0;
}
