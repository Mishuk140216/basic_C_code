#include<stdio.h>
#include<math.h>
int main ()
{
    long long int n, a, i, c, j, t, m, s, b;
    scanf("%lld", &a);
    for(i=0;i<a;i++){
        scanf("%lld", &n);
        t=1;
        for(j=1;t>0;j++){
            t=n/(1*pow(10,j));
        }
        m=(n-(j-1)*9);
        while(n>m){
            b=m;
            t=0;
            for(j=0;b!=0;j++){
                s=b%10;
                b=b/10;
                t=t+s;
            }
            c=m+t;
            if(n==c){
                printf("%lld\n", m);
                break;
            }
            else
                m++;
        }
        if(n==m)
            printf("0\n");
    }
    return 0;
}
