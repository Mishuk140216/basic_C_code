#include<stdio.h>
#include<conio.h>

int main ()
{
    int item1, item2, item3, item4, item5, subTotal, salesTax, totalPrice;

    printf("Enter the price of item 1 \n");
    scanf("%d", &item1);

    printf("Enter the price of itam 2 \n");
    scanf("%d", &item2);

    printf("Enter the price of itam 3 \n");
    scanf("%d", &item3);

    printf("Enter the price of itam 4 \n");
    scanf("%d", &item4);

    printf("Enter the price of itam 5 \n");
    scanf("%d", &item5);

    subTotal = item1 + item2 + item3 + item4 + item5;
    printf("Sub total itam price is %d\n", subTotal);

    salesTax = (item1 + item2 + item3 + item4 + item5)*6/100;
    printf("Sales Tax of itam is %d\n", salesTax);

    totalPrice = subTotal + salesTax;
    printf("Total price is %d\n", totalPrice);

    getch ();
    return 0;

}
