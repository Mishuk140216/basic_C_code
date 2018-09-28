#include <stdio.h>
int main()
{
    int num, i, squares;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=2; i*i<=num; i=i+2){
        squares=i*i;
        printf("\n%d", squares);
    }

    return 0;
}
