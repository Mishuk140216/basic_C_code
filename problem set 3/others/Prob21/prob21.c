#include <stdio.h>
int main()
{
    int i, j,k, l, m, n, x, y, num;
    printf("Enter a odd number");
    scanf("%d", &y);
    x=y*2-1;

    for(i=1; i<=x; i++){
        if(i<=y){
            for(j=y; j>i; j--){
                printf("   ");
            }
            for(num=1; num<=i; num++){
                printf("%2d ", num);
            }
            num--;
            for(k=i; k>1; k--){
                printf("%2d ", --num);
            }
        }
        else{
            for(l=y;l<i;l++){
                printf("   ");
            }
            for(num=1, m=i;m<=x; m++){
                printf("%2d ", num++);
            }
            num--;
            for(n=i; n<x; n++){
                printf("%2d ", --num);
            }
        }

        printf("\n");

    }

    return main ();
}


