#include<stdio.h>

int main()
{

    int i,j, row, col;

    do {
        scanf("%d", &row);
        scanf("%d", &col);
    }
    while (col <= 0 || row <= 0);

    for(i = 1; i<=row; i++) {
    
        for(j=row; j>i; j--)
            printf(" ");
    
        if(i == 1 || i==row) {
            for(j=1; j<=col; j++)
                printf("*");
        }
        else {
            for(j=1; j<= col; j++) {
                if(j == 1 || j == col)
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }


    return 0;
}