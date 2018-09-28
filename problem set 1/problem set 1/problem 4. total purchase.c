#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, num3, num4, num5, subtotal;
    float sales_tax, total;
    printf("the price of num1 item\n");
    scanf("%d", &num1);
    printf("the price of num2 item\n");
    scanf("%d", &num2);
    printf("the price of num3 item\n");
    scanf("%d", &num3);
    printf("the price of num4 item\n");
    scanf("%d", &num4);
    printf("the price of num5 item\n");
    scanf("%d", &num5);
    subtotal=num1+num2+num3+num4+num5;
    sales_tax =subtotal*.06;
    total=subtotal+sales_tax;
    printf("the subtotal of 5 item is %d\n", subtotal);
    printf("the sells tax is %f\n", sales_tax);
    printf("the total amount is %f\n", total);
    getch();
    return 0;

}
