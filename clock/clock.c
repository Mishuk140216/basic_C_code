#include<windows.h>
#include <conio.h>
#include<stdio.h>
int main()
{
    int sec,min,hour, miliSecond;
    printf("\t\tYour time starts now\n\n\n\tHour\tMinute\tSecond\tMili Second\n");
    for(hour=0;hour<24;hour++){
        for(min=0;min<60;min++){
            for(sec=0;sec<60;sec++){
                for(miliSecond=0;miliSecond<100;miliSecond++){
                    printf("\t%.2d\t%.2d\t%.2d\t%.2d\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b" ,hour,min,sec,miliSecond);
                    Sleep(10);
                }
            }
        }
    }

        getch();
        return 0;
}
