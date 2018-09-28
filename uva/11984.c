#include<stdio.h>

int main()
{
    double c, c2, f, d;
    int i, n;
    scanf("%d", &n);
    if(n<=100){
        for(i=1;i<=n;i++){
            scanf("%lf %lf", &c, &f);
            if(c>=0 && f<=100){
            c2=((f*5)/9);
            d=c+c2;
            printf("Case %d: %.2lf\n", i,d);
            }
        }
    }
    return 0;
}
