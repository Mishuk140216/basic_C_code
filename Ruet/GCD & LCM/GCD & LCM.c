#include<stdio.h>
int main()
{
 int a,b,x,y,t,gcd,lcm;
 printf("Enter two integer for gcd & lcm :\n");
 scanf("%d%d",&x,&y );
 a=x;b=y;
 while(b!=0)
    {t=b;
    b=a%b;
    a=t;

    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("Greater common divisor of %d and %d = %d\n ",x,y,gcd);
    printf("Lowest common divisor of %d and %d = %d \n",x,y,lcm);
    return 0;

}
