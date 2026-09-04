#include<stdio.h>

int main()
{

    char str[100];
    int cases, i, j;

    scanf("%d", &cases);
    // printf("\n");

    for(i= 0; i<cases; i++) {

        scanf(" ", &str[0]);
        gets(str);

        for(j=0; (str[j] != 0) && !(str[j] > '0' && str[j] <= '9'); j++) {}

        if(str[j] == 0)
            printf("0");
        else {
            for(; str[j] != 0; j++)
                if(str[j] >= '0' && str[j] <= '9')
                    printf("%c", str[j]);
        }


        printf("\n");
    }
    return 0;
}