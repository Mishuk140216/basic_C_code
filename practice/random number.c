#include<stdio.h>
#include<conio.h>

int main (void)
{
    int i=0;
    srand(time(NULL));
    while (i<20){
        printf("%d\n", 1+rand()%6);
        i++;
    }
    getch ();
    return 0;
}
