#include<stdio.h>
int gcdlcm(int,int);
int main()
{
    int x,y;
    printf("Enter number for gcd & lcm :\n");
    scanf("%d%d",&x,&y);
    return gcdlcm(x,y);
}
int gcdlcm(int p,int q)
{
   int t,gcd,lcm,a,b;
    a=p;b=q;
    while(b!=0)
    {
        t=b;b=a%b;a=t;
    }
    gcd=a;lcm=(p*q)/gcd;
    printf("GCD=%d\n",gcd);
    printf("LCM=%d\n",lcm);
}
