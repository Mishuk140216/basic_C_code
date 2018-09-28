#include <stdio.h>
#include <conio.h>
int main()
{
    int x, answer;
    printf("enter the value of x\n");
    scanf("%d", &x);

    answer= 3*x*x*x*x*x+ 2*x*x*x*x-5*x*x*x-x*x+7*x-6;

    printf("the answer of the equation is %d\n", answer);

    getch();
    return 0;
}
