#include <stdio.h>
int main ()
{
    int n=0, sum=0;
    char ch= '-';
    printf ("Enter the numbers of series (enter a negative to finish)\n");

    while (n>=0)
    {
          scanf ("%d", &n);
          if (n>=0){
          sum = sum+n;}

          if (n<0)
            break;

    }
    printf ("Summation of the series is %d\n", sum);

    return 0;
}

