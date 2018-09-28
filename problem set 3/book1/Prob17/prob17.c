#include <stdio.h>
int main()
{
    int year, month=0, i, j ;
    float  rainfall, totat_rainfall=0, average;
    printf("Enter the number of years: ");
    scanf("%d", &year);


    for(j=0; j<=year; j++){
        for(i=1; i<=12; i++){
                   month++;
                   printf("\nEnter %d no month's rainfall in inches: ", month);
                   scanf("%f",  &rainfall);
                   totat_rainfall=totat_rainfall+rainfall;
            }
    }
    average=totat_rainfall / month;
    printf("The average rainfall per month for the entire period is %.2d", &average);

    return 0;
}
