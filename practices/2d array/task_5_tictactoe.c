#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void turn(const int size, char arr[size][size], int r, int c, char ch)
{
    arr[r][c] = ch;
}

void printArr(const int size, char arr[size][size])
{

    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

char winCheck(const int size, char arr[size][size])
{

    int i, j;

    for (i = 0; i < size; i++)
        if (i == 0 && arr[i][i] != '-' && (arr[i][i] == arr[i + 1][i + 1] && arr[i + 1][i + 1] == arr[i + 2][i + 2]))
            return arr[i][i];
        else if (i == 0 && arr[i][size - 1] != '-' && (arr[i][size - 1] == arr[i + 1][i + 1] && arr[i + 1][i + 1] == arr[i + 2][size - 3]))
            return arr[i][size - 1];
        else if (arr[i][i] != '-' && (arr[i][i] == arr[i][(i + 1) % size] && arr[i][(i + 1) % size] == arr[i][(i + 2) % size]))
            return arr[i][i];
        else if (arr[i][i] != '-' && (arr[i][i] == arr[(i + 1) % size][i] && arr[(i + 1) % size][i] == arr[(i + 2) % size][i]))
            return arr[i][i];
    return 0;
}

int main()
{

    // srand(time(0));

    int size = 3, i, j;
    int r, c, turnCount;
    char arr[size][size], playerA = 'A', playerB = 'B';

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            arr[i][j] = '-';

    printf("Welcome to Tic Tac Toe!\n");
    printf("Enter Row and Coloumn on your turn\n");
    printf("\n");

    printArr(size, arr);

    for (turnCount = 1; turnCount <= 9; turnCount++)
    {
        if (turnCount % 2 == 0)
            printf("Player B's Turn:\n");
        else
            printf("Player A's Turn:\n");

        do
        {
            scanf("%d %d", &r, &c);

            if (r > 2 || c > 2)
                printf("Position out of bound!\n");
            else if (arr[r][c] != '-')
                printf("Position already filled. Enter different position\n");

        } while (r > 2 || c > 2 || arr[r][c] != '-');

        printf("\n");

        if (turnCount % 2 == 0)
            turn(size, arr, r, c, 'B');
        else
            turn(size, arr, r, c, 'A');

        printArr(size, arr);

        if (winCheck(size, arr) != 0)
        {
            printf("Congratulations Player %c! You won the game.\n", winCheck(size, arr));
            turnCount--;
            break;
        }
    }

    // printf("%d", turnCount);

    if (turnCount == 10)
    {
        printf("It's a draw!");
    }

    return 0;
}