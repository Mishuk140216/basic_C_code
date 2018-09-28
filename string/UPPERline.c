#include<stdio.h>
#include<conio.h>


int main ()
{
    char st[100];
    int n, m ,i;
    printf("Enter a line\n");
    gets(st);
    m=strlen(st);
    for(i=0; i<m;i++){
        if(st[i]>='a' && st[i]<='z'){
            printf("%c",st[i]-32);
        }
        else
            printf("%c",st[i]);
    }
    getch();
    return 0;
}

