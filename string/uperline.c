#include<stdio.h>
#include<conio.h>


int main ()
{
    char st[100];
    int n, m ,i;
    printf("Enter a line\n");
    gets(st);

    for(i=0; st[i]!='\0';i++){
        if(st[i]>='a' && st[i]<='z'){
            printf("%c",st[i]-32);
        }
        else
            printf("%c",st[i]);
    }

    getch();
    return 0;
}
