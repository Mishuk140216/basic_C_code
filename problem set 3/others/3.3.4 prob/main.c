#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    double PI, a = 0 ;

    for (int n=1; n < 10; n++) {
        a = a + (pow(-1,n-1) * (1 / (2 * n - 1)));
        printf("%f\n", a);//(1 / (2 * n - 1)) > 0.00000001
        }

    PI = 4 * a;
    printf("%.8f", PI);

    return 0;
}
/**The value of pi can be approximated by using the following series:
pi = 4(1- 1/3 + 1/5 - 1/7 + ... +1/(2n-1) + 1/(2n+1))
Write a program to find the approximate value of pi.*/
