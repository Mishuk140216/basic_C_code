#include<stdio.h>
int main()
{
    unsigned long long int i,n;
    char f[1000]={"1"};
    scanf("%llu",&n);

    for(i=1;i<=n;i++ )
    {
        f[i]=f[i]*i;
    }
    printf("%s",f[i]);
    return 0;
}
