#include<stdio.h>
#include<conio.h>

int main()
{
    int  amount;
    float tips, sales_tax, total;

    printf("Enter the charge of the food \n");
    scanf("%d", &amount);

    tips=amount*.15;
    sales_tax=amount*.07;

    total=amount+tips+sales_tax;

    printf("the charge of the food= %d\n", amount);
    printf("the tips is %f \n", tips);
    printf("the sales tax s %f\n", sales_tax);
    printf("the total amount s %f\n", total);


    getch ();
    return 0;
}



