#include <stdio.h>
#include <conio.h>
int main()
{
    int paisa, taka1, paisa_50,paisa_25,paisa_10,paisa_5,paisa_1;
    printf("Enter the amount in paisa\n");
    scanf("%d", &paisa);
    taka1=paisa/100;
    paisa_50=(paisa%100)/50;
    paisa_25=((paisa%100)%50)/25;
    paisa_10=(((paisa%100)%50)%25)/10;
    paisa_5=((((paisa%100)%50)%25)%10)/5;
    paisa_1=(((((paisa%100)%50)%25)%10)%5);
    printf("1 taka:\t%d\n50 paisa:\t%d\n25 paisa:\t%d\n"
           "10 paisa:\t%d\n5 paisa:\t%d\n"
           "1 paisa:\t%d\n",taka1, paisa_50,paisa_25,paisa_10,paisa_5,paisa_1);

    getch();
    return 0;
}
