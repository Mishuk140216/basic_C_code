#include<stdio.h>
#include<conio.h>

int main ()
{

    int a[20][20], b[20][20], c[20][20], size, i, j, x, y, add;
    printf("Enter a matrix size");
    scanf("%d", &size);
    printf("Enter the matrix \n");
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter another matrix \n");

    for(x=1;x<=size;x++){
        for(y=1;y<=size;y++){
            scanf("%d", &b[x][y]);
        }
        printf("\n");
    }
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
    }
    //c[20][20]=add;
     for(x=1;x<=size;x++){
        for(y=1;y<=size;y++){
            printf("%d ", c[x][y]);
        }
        printf("\n");
    }
    return 0;
}
