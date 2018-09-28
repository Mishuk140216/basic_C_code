#include<stdio.h>

int main ()
{
    int row = 0, col = 0, size =0, matrix[10][10];
    printf("\nMatrix size?\n");
    scanf("%d", &size);

    printf("\nEnter Matrix Element\n");
    for(row=1; row < size +1; ++row)
    {
        for(col=1; col < size +1; ++col)
        {
            printf("\tElement[%d][%d] :", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }
    printf("\nThe Matrix is :\n");
    for(row=1; row < size +1; ++row)
    {
        for(col=1; col < size +1; ++col)
        {
            printf("%4d", matrix[row][col]);

        }
        printf("\n");
    }

    printf("\nOutput of Helically Traverse:\n");
    row = 1;
    while(size>0)
    {
        for(col = row; col < size +1; ++col)
        {
            printf("%d ", matrix[row][col]);

        }
        for(col = row +1; col < size +1; ++col)
        {
            printf("%d ", matrix[col][size]);

        }
        for(col = size - 1; col > row -1 ; col--)
        {
            printf("%d ", matrix[size][col]);

        }
        for(col = size - 1; col > row  ; col--)
        {
            printf("%d ", matrix[col][row]);

        }
        row += 1;
        size -= 1;


    }

    return main ();
}
