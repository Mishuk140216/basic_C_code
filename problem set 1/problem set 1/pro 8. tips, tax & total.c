#include <stdio.h>
#include <conio.h>
int main()
{
    int charge,tips, sells_tax,total;
    printf("enter the charge of the food\n");
    scanf("%d", &charge);
    tips=charge*.15;
    sells_tax=charge*.07;
    total=charge+tips+sells_tax;
    printf("the charge of food is %d\n", charge);
    printf("the tips is %d\n", tips);
    printf("the sells tax is %d\n", sells_tax);
    printf("the total cost is %d\n", total);
    getch();

    return 0;
}
