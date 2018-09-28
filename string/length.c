#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    char st[100];
    int l;
    printf("Enter a line");
    gets(st);
    l=strlen(st);
    printf("%d", l);
    return 0;
}
