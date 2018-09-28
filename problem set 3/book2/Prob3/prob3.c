#include <stdio.h>
int main()
{
    int numerator, denominator, i, GCD;
    printf("\nEnter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    if(numerator==0)
        GCD=denominator;
    else if(denominator==0)
        GCD=numerator;

    else{
    for(i=1; i<=numerator; i++){
        if(numerator%i==0 && denominator%i==0){
            GCD=i;
        }
    }
    }
    numerator=numerator/GCD;
    denominator=denominator/GCD;
    printf("\nIN lowest terms: %d/%d", numerator, denominator);

    return 0;
}
