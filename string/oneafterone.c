#include<stdio.h>
#include<conio.h>


int main ()
{
    char st[100];
    int n, m ,i;
    printf("Enter a line\n");
    gets(st);

    for(i=0; st[i]!='\0';i++){
        printf("%c\n", st[i]);
    }

    getch();
    return 0;
}

