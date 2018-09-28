#include <stdio.h>
#include <conio.h>

int main()
{
    int amount;
    float profit;
    printf("Enter the project amount of total sells:\n");
    scanf("%d", &amount);
    profit=amount * .23;
    printf("the profit is %f", profit);

    getch();
    return 0;

}
