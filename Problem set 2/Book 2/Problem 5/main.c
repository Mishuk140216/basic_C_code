#include <stdio.h>

int main()
{
    int income;
    float tax;

    printf ("Enter the income\n");
    scanf ("%d", &income);

    if (income <= 750){
        tax = 750*.1;
        printf ("Your tax is %.2f", tax);
    }
    else if (income > 750 && income <= 2250){
        tax = 7.50+ (income*.2);
        printf ("Your tax is %.2f", tax);
    }
    else if (income > 2250 && income <= 3750){
        tax = 37.50+ (income*.3);
        printf ("Your tax is %.2f", tax);
    }
    else if (income > 3750 && income <= 5250){
        tax = 82.50+ (income*.4);
        printf ("Your tax is %.2f", tax);
    }
    else if (income > 5250 && income <= 7000){
        tax = 142.50+ (income*.5);
        printf ("Your tax is %.2f", tax);
    }
    else if (income > 7000){
        tax = 230.00+ (income*.6);
        printf ("Your tax is %.2f", tax);
    }

    return 0;
}
