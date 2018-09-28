#include <stdio.h>
#define RETAIL 99
int main()
{
    int package;
    float discount, totalDue;

    printf ("Enter the num of package purchased\n");
    scanf ("%d", &package);

    if (package >0 && package<10){
        discount = 0;
        totalDue = package*99;
        printf ("Your bill is $%.0f", totalDue);
        }
    else if (package >= 10 && package <= 19){
        discount = (RETAIL*package)*0.2;
        totalDue = (RETAIL*package) - discount;
        printf ("Your bill is $%.0f", totalDue);
    }
    else if (package >= 20 && package <= 49){
        discount = (RETAIL*package)*0.3;
        totalDue = (RETAIL*package) - discount;
        printf ("Your bill is $%.0f", totalDue);
    }
    else if (package >= 50 && package <= 99){
        discount = (RETAIL*package)*0.4;
        totalDue = (RETAIL*package) - discount;
        printf ("Your bill is $%.0f", totalDue);
    }
    else if (package >100){
        discount = (RETAIL*package)*0.5;
        totalDue = (RETAIL*package) - discount;
        printf ("Your bill is $%.0f", totalDue);
    }
    else {
        printf ("Invalid Package number");
    }
    return 0;
}
