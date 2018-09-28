#include<stdio.h>
#include<conio.h>

int main ()
{
    int a, b, c, d, e;
    for(b=1;b<=3;b++){
        for(a=b;a<=3;a++){
            printf(" ");
        }
        printf("/\n");
        if(a==b){
            printf("\\");
        }

    }
    getch();
    return 0;
}
