#include<stdio.h>

int main ()
{
    int a, b, max=-32768, min=32767, sum=0, av;
    for(a=0; a<10; a++){
        scanf("%d", &b);
        if(b>max)
            max=b;
        if(min>b)
            min=b;
        sum=sum+b;
    }
    printf("%d\n", max);
    printf("%d\n", min);
    //av=sum/10;
    printf("%d", sum/10);
    return 0;
}
