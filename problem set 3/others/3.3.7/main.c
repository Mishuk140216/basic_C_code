#include <stdio.h>
#include <math.h>

int main()
{
    int num, a=0;

    printf("Enter any number: \n");
    scanf("%d", &num);

    if (num%2 == 0) a=1;
    else {
        for (int i=3; i <= sqrt(num); i+=2) {
            if (num%i == 0) {a=1;
                break;}

            }
        }
    if (num ==2) a=0;
    if (a == 1) printf("not prime!");
    else printf("prime!");
    return main();
}
/**7. Write a program that prompts the user to input a positive integer. It should then
output a message indicating whether the number is a prime number. (Note: An
even number is prime if it is 2. An odd integer is prime if it is not divisible by
any odd integer less than or equal to the square root of the number.)*/
