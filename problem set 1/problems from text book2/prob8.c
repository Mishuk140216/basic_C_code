#include <stdio.h>
#include <conio.h>
int main()
{
    float loan, interest_rate, monthly_interest_rate, monthly_payment;
    float rest_after_1st_payment,rest_after_2nd_payment,rest_after_3rd_payment;

    printf("enter the amount of loan\n");
    scanf("%f", &loan);
    printf("enter the interest rate\n");
    scanf("%f", &interest_rate);

    monthly_interest_rate=interest_rate/12;

    printf("enter the monthly payment\n");
    scanf("%f", &monthly_payment);


    rest_after_1st_payment= loan + loan* monthly_interest_rate/100 - monthly_payment;
    rest_after_2nd_payment= rest_after_1st_payment+rest_after_1st_payment* monthly_interest_rate/100-monthly_payment;
    rest_after_3rd_payment= rest_after_2nd_payment+rest_after_2nd_payment* monthly_interest_rate/100-monthly_payment;


    printf("balance remaining after 1st payment: %.2f\n", rest_after_1st_payment);
    printf("balance remaining after 2nd payment: %.2f\n", rest_after_2nd_payment);
    printf("balance remaining after 3rd payment: %.2f\n", rest_after_3rd_payment);





    getch();
    return 0;
}
