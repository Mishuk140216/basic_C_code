#include <stdio.h>
#include <conio.h>
int main()
{
    int amount;
    float  state_sells_tax, county_sells_tax, total;
    printf("Enter the amount of purchase\n");
    scanf("%d", &amount);
    state_sells_tax=amount * .04;
    county_sells_tax=amount * .02;
    total=amount+state_sells_tax+county_sells_tax;
    printf("the amount of the purchase %d\n", amount);
    printf("the state sells tax is %f\n", state_sells_tax);
    printf("the county sells tax is %f\n", county_sells_tax);
    printf("the total of the sell is %f\n", total);
    getch();
    return 0;

}
