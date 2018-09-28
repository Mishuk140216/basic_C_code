#include<stdio.h>
#include<conio.h>

int main()
{
    int amount, tax_add;

    printf("Enter an amount\n");
    scanf("%d", &amount);

    tax_add = amount + amount *5/100;

    printf("With tax added: $%d", tax_add );

    getch();
    return 0;

}
