#include <stdio.h>
#include <conio.h>
int main()
{
    int x, answer;
    printf("enter the value of x\n");
    scanf("%d", &x);

    answer=((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("the solution of the equation is %d", answer);

    getch();
    return 0;
}
