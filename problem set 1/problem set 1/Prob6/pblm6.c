#include<stdio.h>
#include<conio.h>

int main()
{
    int amount, state_sales_tax, county_sales_tax, total_sales_tax;

    printf("Enter the amount of purchase \n");
    scanf("%d", &amount);

    state_sales_tax = amount *4/100;
    printf("\nState sales tax is %d", state_sales_tax);

    county_sales_tax = amount *2/100;
    printf("\nCounty sales tax is %d", county_sales_tax);

    total_sales_tax = state_sales_tax + county_sales_tax;
    printf("\nTotal sales tax is %d", total_sales_tax);


    getch ();
    return 0;
}

