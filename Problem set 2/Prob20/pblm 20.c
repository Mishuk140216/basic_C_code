#include<stdio.h>
#include<conio.h>

int main ()
{
    int item, mm, dd, yyyy;
    float  unit_price;

    printf("Enter the Item number : ");
    scanf("%d", &item);

    printf("Enter the Unit Price : ");
    scanf("%.2f", &unit_price);

    printf("Enter the Purchase Date mm/dd/yyyy: \n");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("item\tUnit Price\tPurchase Date\n");
    printf("$%d\t%.2f\t%d/%d/%d", item, unit_price, mm, dd, yyyy);


    getch ();
    return 0;
}

