#include<stdio.h>
#include<math.h>
int main ()
{

    unsigned long long int n,a,s;
    int i;
    while(scanf("%llu %llu",&n,&a)){
        if(n>150 || n<1 || a<0 || a>15){
            return 0;
        }
        s=0;
        for(i=1;i<=n;i++){
            s=s+i*pow(a,i);
        }
        printf("%llu\n", s);
    }
}


