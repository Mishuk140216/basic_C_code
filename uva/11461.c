#include<stdio.h>
#include<math.h>

int main ()
{

    long long int d,a, i, c, b;
    while(1){
        scanf("%lld %lld", &a, &b);
        if(a==0 || b==0 || a>b)
            return 0;
        c=sqrt(a);
        d=c*c;
        if(d<a){
            c++;
        }
        d=c*c;
        for(i=0;a<=d && d<=b;c++){
            d=c*c;
            i++;
        }
        if(i>0)
            i--;
        printf("%lld\n", i);
    }
}
