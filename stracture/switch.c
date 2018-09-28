#include<stdio.h>
int main()
{
    char grade;
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':printf("Go\n");
                 break;
        case 'B':printf("God\n");
                 break;
        case 'C':printf("Good\n");
                 break;
        case 'D':printf("bad\n");
                 break;

    }
    main();
    return 0;
}
