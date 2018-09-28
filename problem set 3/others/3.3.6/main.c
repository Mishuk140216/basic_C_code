#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, odd = 0, even = 0, count = 0;

    do {
        printf("enter number: ");
        scanf("%d", &a);

        if (a%2 == 0) even = even + a;
        else odd = odd + a;

        count++;
        } while (count <=10);

    printf("\n%d", even);
    printf("\nodd is %d", odd);

    return 0;
}
/**6. Write a program that reads a set of integers and then nds and prints the sum
of the even and odd integers.*/
