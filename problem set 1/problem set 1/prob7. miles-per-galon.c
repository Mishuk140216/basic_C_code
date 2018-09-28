#include <stdio.h>
#include <conio.h>
int main()
{
    int miles, gas, miles_per_gellon;
    printf("enter the miles driven:\n");
    scanf("%d", &miles);
    printf("enter the galon of gas used:\n");
    scanf("%d", &gas);
    miles_per_gellon= miles / gas;
    printf("the car's miles per gellon is %d", miles_per_gellon);
    getch();

    return 0;
}
