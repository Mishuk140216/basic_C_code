#include <stdio.h>
int main()
{
    int num, i, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1, result=1; i<=num; i++){
        result= result*i;

    }
    printf("The factorial number of %d is: %d ", num, result);


    return 0;
}
