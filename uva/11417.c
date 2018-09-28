#include<stdio.h>

int main ()
{
    long int a,b,i,j,n,t;
    long long int g;
    while(1){
        scanf("%ld", &n);
        if(n<=1 || n>=501){
            return 0;
        }
        g=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                a=i;b=j;
                while(b!=0){
                   t=b;
                   b=a%b;
                   a=t;
                   }
                g+=a;
            }
        }
        printf("%lld\n", g);
    }
}
