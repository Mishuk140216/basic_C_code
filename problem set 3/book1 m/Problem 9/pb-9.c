#include <stdio.h>
#include<windows.h>
int main ()
{
    int count;

    for (count=0;count<=50; count++)
    {
        Sleep(100);
        printf ("The count is %d\n", count);
    }

    return 0;
}

