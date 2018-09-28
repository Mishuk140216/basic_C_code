#include<stdio.h>
int main ()
{
    long long int a,s,b,c,i;
    scanf("%lld", &c);
    for(i=1;i<=c;i++){
        scanf("%lld",&a);
        scanf("%lld",&b);
        if(a>b)
            return 0;
        if(a%2==0){
            a++;
        }
        s=0;
        for(;a<=b;a=a+2){
            s=s+a;
        }
        printf("Case %lld: %lld\n", i,s);

    }
    return 0;
}
