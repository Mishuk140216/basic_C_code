#include <stdio.h>
int main ()
{
    int factor=1,num,t,digit,sum=0;
    printf ("Enter your number: ");
    scanf ("%d", &num);
    if (num<0)
        num=num*-1;

    t=num;
    while (t){
        t=t/10;
        factor = factor*10;
    }
    printf ("\nNumber in separate digit: ");
    while (factor>1){
        factor=factor/10;
        digit=num/factor;
        sum=sum+digit;
        printf("%d  ",digit);
        num = num%factor;
    }
    printf ("\nsummation is %d", sum);

    return main();
}
