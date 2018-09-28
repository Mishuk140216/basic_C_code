#include<stdio.h>

int main ()
{
    long int on, h1, m1, off, h2, m2, alrm;
    while(scanf("%ld %ld %ld %ld", &h1, &m1, &h2, &m2)){
        if(h1==0 && m1==0 && h2==0 && m2==0){
            return 0;
        }
        on=h1*60+m1;
        off=h2*60+m2;
        if(on>off){
            off=off+1440;
        }
        alrm=off-on;
        printf("%ld\n", alrm);
    }
}
