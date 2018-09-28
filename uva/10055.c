#include<stdio.h>
int main ()
{
    unsigned long long int a,b,c,d=4294967296;
    while(scanf("%llu %llu",&a,&b)!=EOF){
        if(a>d || b>d){
            return 0;
        }
        if(a<b){
            c=b-a;
            printf("%llu\n", c);
        }
        else{
            c=a-b;
            printf("%llu\n", c);
        }
    }
}
