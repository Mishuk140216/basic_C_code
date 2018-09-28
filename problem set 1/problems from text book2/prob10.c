#include <stdio.h>
#include <conio.h>
int main()
{
    int item_num,mm, dd, yyyy;
    float unit_price;
    printf("enter the item num\n");
    scanf("%d", &item_num);
    printf("enter the unit price\n");
    scanf("%f", &unit_price);
    printf("enter the purchase date dd/mm/yyyy\n");
    scanf("%d/%d/%d",&dd, &mm, &yyyy );
    printf("ITEM\tUNIT PRICE \tPURCHASE DATE\n");
    printf("$%d\t%.2f\t\t%d/%.2d/%d", item_num, unit_price,  dd,mm, yyyy);



    getch();
    return 0;
}
