#include <stdio.h>
#include <conio.h>
int main()
{
    int GSIPrefix, group_identifier, publisher_code, Item_num ,check_digit;
    printf("enter the ISBN code\n");
    scanf("%d-%d-%d-%d-%d", &GSIPrefix, &group_identifier, &publisher_code, &Item_num ,&check_digit);
    printf("\nGSI prefix: %d\n", GSIPrefix);
    printf("GROUP identifire: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Iem number: %d\n", Item_num);
    printf("Check digit: %d\n", check_digit);


    getch();
    return 0;
}
