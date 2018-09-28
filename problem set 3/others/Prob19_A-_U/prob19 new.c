#include <stdio.h>
int main()
{
    int i, j, l;
    char  ch, letter= 'A';
    //scanf("%c", &ch);
    for(i=1; i<=6;i++){
        for(j=6 /*k=0*/; j>=i; j--){
            printf("%c ", letter++);
            //k++;
        }

        printf("\n");
        for(l=1; l<=i; l++){
            printf("  ");
        }
    }


    return 0;
}
