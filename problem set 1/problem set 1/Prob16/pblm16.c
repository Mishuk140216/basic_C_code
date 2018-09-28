#include<stdio.h>
#include<conio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter a data dd/mm/yyyy\n");
    scanf("%d%d%d", &dd, &mm, &yyyy);

    printf("You enter the data %d%d%d", yyyy, mm, dd);

    getch ();
    return 0;
}
