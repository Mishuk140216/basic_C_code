#include<stdio.h>

int main ()
{
    long int  b, c, d, e, i, n, t;
    float a, a1, a2, a3;
    scanf("%ld", &n);
    for(i=0; i<n; i++){
        scanf("%ld %ld %ld %ld %f %f %f",&b,&c,&d,&e,&a1,&a2,&a3);
        if(a1>a2){
            if(a3>a2)
                a=(a1+a3)/2;
            else
                a=(a1+a2)/2;
        }
        else{
            if(a3>a1)
                a=(a2+a3)/2;
            else
                a=(a1+a2)/2;
        }

        t=a+b+c+d+e;
        if(t>=90)
            printf("Case %ld: A\n", i+1);
        else if(t>=80 && t<90)
            printf("Case %ld: B\n", i+1);
        else if(t>=70 && t<80)
            printf("Case %ld: C\n", i+1);
        else if(t>=60 && t<70)
            printf("Case %ld: D\n", i+1);
        else
            printf("Case %ld: F\n", i+1);
    }
    return 0;
}
