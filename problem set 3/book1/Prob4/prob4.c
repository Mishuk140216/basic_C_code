#include <stdio.h>
int main()
{
    int i, sum, x;
    for(i=0, sum=0;i<10;i++)
    {
        scanf("%d", &x);
        sum=sum+x;
    }

    printf("the sum is %d", sum);
    return 0;
}
