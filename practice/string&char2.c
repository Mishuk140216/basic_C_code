#include<stdio.h>
#include<conio.h>

int main (void)
{
    char gender;

    printf("Please select your gender [M/F]");
    gender = getchar();

    printf("You selected: %c", gender);

    getch ();
    return 0;
}



