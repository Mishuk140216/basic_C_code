#include<stdio.h>

int main ()
{
    int row = 0, col = 0, size = 0, sumBelow = 0, sumAbove = 0, matrix[5][5];
    printf("\n Matrix size? ");
    scanf("%d", &size);

    printf("\n Enter Matrix Elements\n");
    for(row=1; row<size+1; ++row){
        for(col=1; col<size+1; ++col){
            printf("\tElement[%d][%d] :", row, col);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nThe given matrix is :\n");
    for(row=1; row<size+1; ++row){
        for(col=1; col<size+1; ++col){
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }

    printf(" Diagonal Elements are: ");
    for(row=1; row<size+1; ++row){
        for(col=1; col<size+1; ++col){
            if(row == col)
            printf("%4d", matrix[row][col]);
        }
    }

    printf("\n Elements above the main diagonal");
    for(row=1; row<size+1; ++row){
        for(col=1; col<size+1; ++col){
            if(row < col){
                printf("%4d", matrix[row][col]);
                sumAbove += matrix[row][col];
            }
        }
    }

    printf("\n Elements above the main diagonal");
    for(row=1; row<size+1; ++row){
        for(col=1; col<size+1; ++col){
            if(row > col){
                printf("%4d", matrix[row][col]);
                sumBelow += matrix[row][col];
            }
        }
    }

    printf("\n Sum of elements above the main diagonal : %d\n\
           below the main diagonal : %d\n", sumAbove, sumBelow);

    return 0;
}
