#include<stdio.h>
#include<conio.h>

struct student {
    char name[100];
    int roll;
    float mark;
};
void main ()
{
    struct student a;
    printf("Name : ");
    gets(a.name);
    printf("Roll :");
    scanf("%d", &a.roll);
    printf("Mark :");
    scanf("%f", &a.mark);
    printf("\n My name is %s. My roll is %d. And my mark is %f.", a.name, a.roll, a.mark);
    getch ();

}
