#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main ()
{
    int num;
    for(num=0;num<=1000; num+=10){
            Sleep(100);
        printf("%4d,",num);
        if(num==1000)
            printf("\b.");
    }
    getch ();
    return 0;
}
