#include<stdio.h>

int main()
{

    int i,j, num;

    do {
        scanf("%d", &num);
    }
    while (num % 2 == 0 || num < 0);

    for(i = 1; i<=num; i++) {
        if(i == 1 || i==num) {
            for(j=1; j<=num; j++)
                printf("*");
        }
        else if (i == (num/2) + 1) {

            for(j=1; j<= num; j++)
                if(j == 1 || j == num || j == (num/2)+1)
                    printf("*");
                else
                    printf(" ");
        }
        else {
            // printf("*");
            for(j=1; j<= num; j++) {
                if(j == i || j == num - i + 1 || j == 1 || j == num)
                    printf("*");
                else
                    printf(" ");
            }

            // printf("*");
        }






        printf("\n");
    }

    return 0;
}