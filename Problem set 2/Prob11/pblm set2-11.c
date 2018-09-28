#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    scanf("%d", &number);
    switch (number){
    case 1:
        printf("Roman number is I");
        break;

    case 2:
        printf("Roman number is II");
        break;
    case 3:
        printf("Roman number is III");
        break;
    case 4:
        printf("Roman number is IV");
        break;
    case 5:
        printf("Roman number is V");
        break;
    case 6:
        printf("Roman number is VI");
        break;
    case 7:
        printf("Roman number is VII");
        break;
    case 8:
        printf("Roman number is IX");
        break;
    case 10:
        printf("Roman number is X");
        break;
    default:
        printf("Invalid number");
        break;
    }
   getch ();
   return 0;
}
