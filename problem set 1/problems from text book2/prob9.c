#include <stdio.h>
#include <conio.h>
int main()
{
    int dd, mm, yyyy;
    printf("enter a date dd/mm/yyyy\n");
    scanf("%d/%d/%d",&dd, &mm, &yyyy );

    printf("you entered the date %d%.2d%.2d",  yyyy, mm,dd);

    getch();
    return 0;
}
