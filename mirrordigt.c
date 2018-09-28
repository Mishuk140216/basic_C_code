#include<stdio.h>
#include<conio.h>
int main ()
{
    int a, b, c, e, f=0, i=0, j=0;
    char d[30];
    scanf("%d", &a);
    while(a!=0){
        b=a%10;
        a=a/10;
        j=j*10+b;
    }

    printf("%d", j);
    return 0;
}
