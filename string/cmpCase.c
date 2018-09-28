#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    char st[100], sp[100];
    int n;
    printf("Enter a line\n");
    gets(st);
    printf("Enter another line\n");
    gets(sp);
    n=strcmpi(st, sp);
    printf("%d", n);
    return 0;
}
