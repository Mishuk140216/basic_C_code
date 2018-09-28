#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
    char st[100];
    int n;
    printf("Enter a line\n");
    gets(st);
    strlwr(st);
    puts(st);
    return 0;
}
