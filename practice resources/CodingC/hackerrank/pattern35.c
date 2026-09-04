#include<stdio.h>

int main()
{

    int i, j,k, num = 5;

    for(i = 1, k = 1; i <= num; i++) {
        
        k = 1;
        for(j = i; j <= num; j++) {
            printf("%d", j);
            k++;
        }
        
        
        
        for(j = num-k + 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    // printf("Hello world!");
    return 0;
}