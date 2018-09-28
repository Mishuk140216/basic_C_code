#include <stdio.h>
int main()
{
    int n, i, j, result;
    float sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1, sum=1; i<=n; i++){
        for(j=1, result=1; j<=i; j++){
            result= result*j;

        }
        sum= sum+ 1.0/result;

    }
    printf("The calculation of the series is %f", sum);


    return 0;
}
