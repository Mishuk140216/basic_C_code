#include <stdio.h>
int main()
{
    float num=0;
    float i,j;
    for(i=1, j=30; i<=30 ; i++, j--)
    {
        num=num+(i/j);
    }
    printf("the result is %f", num);
    return 0;
}
