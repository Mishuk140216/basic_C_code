#include <stdio.h>
int main()
{
    int tuition, i;
    float  TotalTuition;
    for(tuition=6000,TotalTuition=0, i=1; i<=5; i++){
        TotalTuition=TotalTuition+tuition;
        TotalTuition=TotalTuition+TotalTuition*.02;


    }
    printf("the projected amount is $%.2f",  TotalTuition);


    return 0;
}
