#include<stdio.h>
#include<windows.h>

int main()
{
    int time, calore;
    for(time=10;time<=30;time+=5){
        calore=time*3.9;
        printf("The calories burned after %d minites: %d\n", time, calore);
        Sleep(1000);
    }
    return 0;
}
