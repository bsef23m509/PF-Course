#include<stdio.h>

int main()
{

    int i, j, k, l, num, count=0;
    
    scanf("%d", &num);

    for(i = 1; i<=9; i++)
        for(j = 0; j<=9; j++)
            for(k = 0; k<=9; k++)
                for(l = 0; l<=9; l++)
                    if(i+j+k+l == num) {
                    printf("%d%d%d%d ", i, j, k, l);
                    count++;
                    };
                    
    if(count == 0)               
        printf("NO OUTPUT" );
                    
    return 0;
}