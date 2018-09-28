#include <stdio.h>
int main()
{
    int days, date, i, j;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of week(1=sun, 7=sat) : ");
    scanf("%d", &i);
    for(date=1; date<=days; date++, i++){
        if(date==1){
            for(j=1;j<i;j++){
                printf("\t");
            }
        }


        printf("%2d\t", date);
        if(i==7){
            printf("\n");
            i=0;
        }

    }

    return 0;
}
