#include<stdio.h>

int main()
{
    int square_feet, acres;

    printf("Enter the square feet\n");
    scanf("%d", &square_feet);

    acres = square_feet/43560;

    printf("\nThe area in acre is %d", acres);

    return 0;
}
