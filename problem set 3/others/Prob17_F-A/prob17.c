#include <stdio.h>
int main()
{
    int letter, i, j;

    for(i=1; i<=6; i++){
        letter=70;
        for(j=1; j<=i; j++){
            printf("%c", letter--);

        }
        printf("\n");
    }

    return 0;
}


