#include<stdio.h>
#include<conio.h>

int main (void)
{
    int mishuk[5]={21,21,44,42,13};
    int i;
    int total=0;

    for(i=0;i<5;i++){
        total += mishuk[i];
    }
    printf("The total number is %d", total);


    getch ();
    return 0;
}


