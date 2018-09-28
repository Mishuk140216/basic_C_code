#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, digit[80], j=0, sum = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = num * -1;

    for (int i=0; num != 0; i++) {
        digit[i] = num % 10;
        num = num / 10;
        j++;
        sum = sum + digit[i];
        }
    printf("digit: ");
    for (int k = 1; k <= j; k++) printf("%d  ", digit[j-k]);
    printf("\nsum: %d\n", sum);

    getch();
    return 0;
}
/**3. Write a program that prompts the user to input an integer and then outputs
both the individual digits of the number and the sum of the digits. For example,
it should output the individual digits of 3456 as 3 4 5 6, output the individual
digits of 8030 as 8 0 3 0, output the individual digits of 2345526 as 2 3 4 5 5 2 6,
output the individual digits of 4000 as 4 0 0 0, and output the individual digits
of -2345 as 2 3 4 5.*/
