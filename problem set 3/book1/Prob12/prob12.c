#include<stdio.h>
int main()
{
    int  minute;
    float calories;
    for(calories=3.9, minute=1; minute<=30; minute++){
        calories=calories+3.9;
        if(minute==10 || minute==15 || minute==20 ||minute==25 ||minute==30 ){
            printf("%f calories burned after %d minute \n",calories, minute );
        }
    }



    return 0;
}
