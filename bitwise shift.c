#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        int num =i;
        for(j=1; j<=2*(rows-i); ++j)
        {
            printf(" ");
        }
        for(j=1; j<=i; ++j)
        {
            printf("%d ",num);
            num++;
        }
        num--;
        for(j=1; j<i; ++j)
        {
            num--;
            printf("%d ",num);
        }
        printf("\n");
    }
    return 0;
}
