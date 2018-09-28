#include<stdio.h>
#include<conio.h>

int main ()
{
    float loan, interest_rate,monthly_interest_rate, monthly_payment1st,monthly_payment2nd, monthly_payment3rd, rest_monthly_payment1st, rest_monthly_payment2nd,rest_monthly_payment3rd;

    printf("Enter loan\n");
    scanf("%f",&loan);

    printf("Enter interest_rate\n");
    scanf("%f",&interest_rate);

    monthly_interest_rate=interest_rate/12;

    printf("Enter monthly_payment1st\n");
    scanf("%f",&monthly_payment1st);

    printf("Enter monthly_payment2nd\n");
    scanf("%f",&monthly_payment2nd);

    printf("Enter monthly_payment3rd\n");
    scanf("%f",&monthly_payment3rd);

    rest_monthly_payment1st = loan + loan*monthly_interest_rate/100-monthly_payment1st;
    rest_monthly_payment2nd= rest_monthly_payment1st + rest_monthly_payment1st*monthly_interest_rate/100-monthly_payment1st;
    rest_monthly_payment3rd = rest_monthly_payment2nd + rest_monthly_payment2nd*monthly_interest_rate/100-rest_monthly_payment2nd;

    printf("Balence remaining after 1st %f",rest_monthly_payment1st);
    printf("Balence remaining after 2nd %f",rest_monthly_payment2nd);
    printf("Balence remaining after 3rd %f",rest_monthly_payment3rd);

    getch ();
    return 0;
}
