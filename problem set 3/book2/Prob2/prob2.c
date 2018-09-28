#include <stdio.h>
int main()
{
    int num1, num2, i, GCD;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1==0)
        GCD=num2;
    else if(num2==0)
        GCD=num1;

    else{
        for(i=1 ; i<=num1; i++){
           if(num1%i==0 && num2%i==0){
                GCD=i;
            }

    }
    }
    printf("Greatest common divisor: %d", GCD);

    return 0;
}

