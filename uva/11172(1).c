#include<stdio.h>

int main ()
{
    long long int a, b,c, i;
    scanf("%lld",&c);
    for(i=0;i<c;i++){
        scanf("%lld %lld", &a, &b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}
