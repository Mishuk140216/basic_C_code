#include<stdio.h>
#include<conio.h>

int main ()
{
    int num1,num2, sum;
    char ch;

    do
    {
        printf("\nEnter the two numbers \n");
        scanf("%d %d", &num1, &num2);
        sum = num1 + num2;
        printf("The result is %d\n", sum);
        printf("\nDo you want to perform the operation again?(y=yes/n=no)\n");
        ch=getche();
        if(ch == 'y')
            continue;
        else(ch == 'n');
            break;
    }while(1);
   // getch ();
    return 0;
}


