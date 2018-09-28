#include <stdio.h>
int main()
{
    int i, letter, j ,k, l;
    for(i=1; i<=6; i++){
        for(k=6; k>i; k--){
            printf(" ");
        }

        for(letter=65, j=i; j>1; j--){
            printf("%c", letter++);
        }
        letter--;
        for(k=letter; k>65; k--){
            printf("%c", --letter);
        }

        printf("\n");
    }

    return 0;
}

