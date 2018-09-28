#include<stdio.h>
#include<stdio.h>

char gameBoard[3][3];
void drawBoard();
int showResult(char ch);
int validateInput(int cell);
void turnPlayerO(int* pCell);
void turnPlayerX(int* pCell);
void getRowCol(int Cell, int* pX, int* pY);

int main ()
{
    int x = 0, y = 0, row = 0, col = 0, selectedCell = 0, availableCell = 9;
    char startChar = '1';
    for(row =0;row <3; row++)
        for(col = 0; col < 3; col++)
            gameBoard[row][col] = startChar++;
    drawBoard();
    while(availableCell >= 0)
    {
        turnPlayerX(&selectedCell);
        getRowCol(selectedCell, &x, &y);
        gameBoard[x][y] = 'X';
        availableCell -= 1;
        drawBoard();
        if(showResult('X') == 1)
        {
            break;
        }
        else if(availableCell == 0)
        {
            printf("\nGame Drawn");
            break;
        }
        turnPlayerO(&selectedCell);
        getRowCol(selectedCell, &x, &y);
        gameBoard[x][y] = 'O';
        availableCell -= 1;
        drawBoard();
        if(showResult('O') == 1)
        {
            break;
        }
        else if(availableCell == 0)
        {
            printf("\nGame Drawn");
            break;
        }
    }
    getch();
    return main ();
}
    void drawBoard()
    {
        int i, j;
        printf("\n TIC TAC TOE");
        printf("Digits (1-9) indicates VALID cell number\n");
        printf("\n   %c |  %c  |  %c", gameBoard[0][0], gameBoard[0][1], gameBoard[0][2] );
        printf("\n  ---|-----|---");
        printf("\n   %c |  %c  |  %c", gameBoard[1][0], gameBoard[1][1], gameBoard[1][2] );
        printf("\n  ---|-----|---");
        printf("\n   %c |  %c  |  %c", gameBoard[2][0], gameBoard[2][1], gameBoard[2][2] );

    }
    void turnPlayerO(int* pCell)
    {
        int cell;
        do
        {
            printf("\n Player O,\n Select VALID cell number: ");
            scanf("%d", &cell);
        }while(0 == validateInput(cell));
        *pCell = cell;
    }
    void turnPlayerX(int* pCell)
    {
        int cell;
        do
        {
            printf("\n Player X,\n Select VALID cell number: ");
            scanf("%d", &cell);
        }while(0 == validateInput(cell));
        *pCell = cell;
    }
    void getRowCol(int cell, int* pX, int* pY)
    {
        *pX = (cell-1)/3;
        *pY = (cell-1)%3;
    }
    int validateInput(int cell)
    {
        int row, col;
        if((cell<1)||(cell>9))
            return 0;
        getRowCol(cell, &row, &col);
        if(('O' == gameBoard[row][col]) || ('X' == gameBoard[row][col]))
        {
            return 0;
        }
        return 1;
    }
    int showResult(char ch)
    {
        int status = 0;
        if(gameBoard[0][0] == ch && gameBoard[1][1] == ch && gameBoard[2][2] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[0][2] == ch && gameBoard[1][1] == ch && gameBoard[2][0] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[0][0] == ch && gameBoard[1][0] == ch && gameBoard[2][0] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[1][0] == ch && gameBoard[1][1] == ch && gameBoard[1][2] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[2][0] == ch && gameBoard[2][1] == ch && gameBoard[2][2] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[0][0] == ch && gameBoard[0][1] == ch && gameBoard[0][2] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[0][1] == ch && gameBoard[1][1] == ch && gameBoard[2][1] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        else if(gameBoard[0][2] == ch && gameBoard[1][2] == ch && gameBoard[2][2] == ch)
        {
            printf("\n Player %c is winner", ch);
            status = 1;
        }
        return status;



    }


