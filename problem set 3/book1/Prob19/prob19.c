#include <stdio.h>
int main()
{
    int i, days, pennies, totalPennies=0;
    float doller;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    for(i=1, pennies=1; i<=days ; i++){
        if(i==1){
            printf("Day\t\tPennies\n");
            printf("*********************************\n");

        }
        printf("%d\t\t%d\n", i,pennies );
        totalPennies=totalPennies+pennies;
        pennies=pennies*2;
    }
    pennies=pennies/2;
    doller=totalPennies/100.00;
    printf("\n\nThe total amount is %.2f", doller);


    return 0;
}

