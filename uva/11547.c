#include<stdio.h>

int main()
{
    long long int mx;
    long int i, n, a, dz;
    scanf("%ld", &n);
    if(n>=1 && n<=100){
        for(i=1;i<=n;i++){
            scanf("%ld", &a);
            if(a<=1000 && a>=-1000){
                mx=(((((a*567)/9)+7492)*5)-498);
                mx=mx/10;
                dz=mx%10;
                if(dz<0){
                    dz=dz*-1;
                }
                printf("%ld\n", dz);
            }
        }
    }
    return 0;
}
