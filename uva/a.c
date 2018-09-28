#include<stdio.h>
int main ()
{

    long long int n, a, i, j, t=0, m, s, b=0;
    scanf("%lld", &b);
    for(j=0;b!=0;j++){
        s=b%10;
        b=b/10;
        t=t+s;
        printf("0");
    }
    printf("%lld", t);
    return 0;
}
