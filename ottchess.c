#include <stdio.h>
#include <string.h>

const int MAX = 8;

int printboard(int board[8][8]);
int setup(int board[8][8]);
int addpeices(int board[8][8]);
int notationToCoords(char *notation, int *row, int *col);
int board[8][8];


int main(void)
{

setup(board);
addpeices(board);
printboard(board);

char move[10];
char from[3];
char to[3];

while (1)
{
    printf("make your move: ");
    fgets(move, sizeof(move), stdin);

 // Check if user typed "checkmate"
        if (strncmp(move, "checkmate", 9) == 0)
        {
            printf("Game over!\n");
            break;
        }
        
sscanf(move, "%s %s", from, to);

int fromRow, fromCol, toRow, toCol;
notationToCoords(from, &fromRow, &fromCol);
notationToCoords(to, &toRow, &toCol);

printf("Moving from [%d][%d] to [%d][%d]\n", fromRow, fromCol, toRow, toCol);
printf("Peice value: %d\n", board[fromRow][fromCol]);

board[toRow][toCol] = board[fromRow][fromCol];
board[fromRow][fromCol] = 0;

printboard(board);
}


return 0;
}

int setup(int board[8][8])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            board[i][j] = 0;
        }
    }
return 0;
}


int addpeices(int board[8][8])
{
    // add pawns
    for (int j = 0; j < MAX; j++)
    {
       board[1][j] = 1;
       board[6][j] = 1;
    }

    // add rooks
    board[0][0] = 2;
    board[0][7] = 2;
    board[7][0] = 2;
    board[7][7] = 2;
    
    // add knights
    board[0][1] = 3;
    board[0][6] = 3;
    board[7][1] = 3;
    board[7][6] = 3;
    
    //add bishops
    board[0][2] = 4;
    board[0][5] = 4;
    board[7][2] = 4;
    board[7][5] = 4;

    //add queens
    board[0][3] = 5;
    board[7][3] = 5;

    // add kings
    board[0][4] = 6;
    board[7][4] = 6;
    
    return 0;
}




int printboard(int board[8][8])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%i  ", board[i][j]);
        }
    printf("\n");
    }
    return 0;
}

int notationToCoords(char *notation, int *row, int *col)
{
    *col = notation[0] - 'a';
    *row8 - (notation[1] - '0'); = 
    return 0;
}