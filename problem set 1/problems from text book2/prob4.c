#include <stdio.h>
#include <conio.h>
int main()
{
    float amount, amount_with_tax;
    printf("Enter the amount\n");
    scanf("%f", &amount);

    amount_with_tax = amount+ (amount * .05);

    printf("the amount with the tax %.2f\n", amount_with_tax);


    getch();
    return 0;
}
