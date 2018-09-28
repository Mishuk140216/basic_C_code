#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
    char st[100];
    printf("Enter a line");
    gets(st);
    strrev(st);
    puts(st);
    return 0;
}
