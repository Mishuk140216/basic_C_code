#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, denom1, num2, denom2,result_num,result_denom;
    printf("enter the two fractions for add\n");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    result_num=num1*denom2+num2*denom1;
    result_denom=denom1*denom2;
    printf("The sum is %d/%d ", result_num,result_denom);

    getch();
    return 0;
}