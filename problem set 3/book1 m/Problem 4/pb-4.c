#include<stdio.h>
#include<conio.h>

int main()
{
    int num, sum=0, i;

    for(i=0;i<10;i++){

    scanf("%d", &num);
        sum=sum+num;

        printf("\nThe sum is %d\n\n", sum);
    }
    getch ();
    return 0;
}
