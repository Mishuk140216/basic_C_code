#include <stdio.h>
int main()
{
    int i,j,sum=0;
    for (i=1,j=30; i<=30,j>=1; i++,j--)
    {
         sum= sum+(i/j);
    }
    printf ("%d", sum);

    return 0;
}

