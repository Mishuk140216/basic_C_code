#include<stdio.h>
#include<conio.h>
int main ()
{
    int num=0, product;
    printf("Inter the number");
    scanf("%d", &num);
    while(num<10){
        product=num*10;
        printf("Product= %d\n", product);
        printf("Inter another number");
        scanf("%d", &num);

        if(product<=100)
            continue;
        if(product>100)
            break;
    }
    printf("Invalid number");
    getch ();
    return 0;
}

