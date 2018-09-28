#include <stdio.h>
int main()
{
    int letter=65, i, j;
    for(i=1;i<=6;i++){
        for(j=1; j<=i; j++){
            printf("%c", letter++);
        }
        printf("\n");
    }

    return 0;
}

