#include <stdio.h>
int main()
{
    int a[10]={0}, num ,i;
    scanf("%d", &num);
    while(num!=0)
    {
        i=num%10;
        num=num/10;
        a[i]=a[i]+1;

    }
    for(i=0; i<=9; i++)
    {
        if(a[i]>1)
            printf("%d is retvty", i);

    }
    return 0;
}
