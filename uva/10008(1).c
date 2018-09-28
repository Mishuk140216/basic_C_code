#include<stdio.h>

int main ()
{
    long int n, i;
    char *s[1000][1000];
    scanf("%ld", &n);
    for(i=0;i>n;i++){
        scanf("%s", s[i]);
    }

    return 0;
}
