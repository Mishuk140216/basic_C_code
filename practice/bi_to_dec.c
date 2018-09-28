#include <stdio.h>
#include <math.h>

int main()
{
    int dec=0, n, i;
    int bin[10];

    scanf("%d", &n);
    for( i = 0; i<n; i++ )
        scanf("%d", &bin[i]);

    for( i = 0; i < n; i++ )
        dec = dec + bin[i] * (int) pow(2,n-i-1);

    printf("%d ", dec);

    return 0;
}

