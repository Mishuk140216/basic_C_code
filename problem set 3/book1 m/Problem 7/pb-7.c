#include <stdio.h>
int main ()
{
     int x=1;

     do
     {
         printf ("Enter a number ");
         scanf ("%d", &x);
         break;
     }
     while (x>0);

    return 0;
}

