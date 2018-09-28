#include <stdio.h>
#include <conio.h>
int main()
{
    int amount,bills20, bills10, bills5, bills1;
    printf("enter the dollar amount\n");
    scanf("%d", &amount);
    bills20= amount/20;
    bills10=(amount-20*bills20)/10;
    bills5=(amount-20*bills20-10*bills10)/5;
    bills1=(amount-20*bills20-10*bills10-5*bills5);

    printf("$20 bills:\t%d\n", bills20);
    printf("$10 bills:\t%d\n", bills10);
    printf("$5 bills:\t%d\n", bills5);
    printf("$1 bills:\t%d\n", bills1);

    getch();
    return 0;
}
