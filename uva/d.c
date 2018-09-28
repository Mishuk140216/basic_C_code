#include<stdio.h>
#include<math.h>

int main ()
{

    long long int n, a, i, j, t, m, s, b;
    scanf("%lld", &a);
    for(i=0;i<a;i++){
        scanf("%lld", &n);
        t=1;
        for(j=1;t>0;j++){
            t=n/(1*pow(10,j));

        }
        m=(n-(j-1)*9);
        printf("%lld", m);
    }
    return 0;
}
