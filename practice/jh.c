#include<stdio.h>

int main ()
{
    int i, j, n=0;
    scanf("%d", &i);
    scanf("%d", &j);
    n=j%i;
    printf("%d \"'%'\" %d = %d", j, i, n);

    return 0;
}

