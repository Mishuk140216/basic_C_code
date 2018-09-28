#include <stdio.h>
int main()
{
    int letter=80, i, j, k, l;
    for(i=1; i<=6;i++){
        for(j=6, k=0; j>=i; j--){
            printf("%c ", letter++);
            k++;
        }
        letter=letter-2*k+1;
        printf("\n");
        for(l=1; l<=i; l++){
            printf("  ");
        }
    }


    return 0;
}
