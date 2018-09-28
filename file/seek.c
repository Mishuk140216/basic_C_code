#include<stdio.h>
#include<conio.h>

int main ()
{
    FILE *fp;
    fp=fopen("e:/temp/fseek.ncg", "w");
    puts("I love my country");
    fputs("I love my country", fp);
    fclose(fp);
    fp=fopen("e:/temp/fseek.ncg", "r");
    fseek(fp, 3L, 0);
    printf("%c\n", getc(fp));
    fseek(fp, 8L, 0);
    printf("%c\n", getc(fp));
    fseek(fp, 2L, 1);
    printf("%c\n", getc(fp));
    fseek(fp, -4L, 1);
    printf("%c\n", getc(fp));
    fseek(fp, -5L, 2);
    printf("%c\n", getc(fp));
    fclose(fp);
    fclose(fp);
    getch();
    return 0;
}
