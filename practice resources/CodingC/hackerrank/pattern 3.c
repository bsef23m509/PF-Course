#include<stdio.h>

void num_pattern(int high, int low) {

    int i;

    for(i = high; i >= low; i--)
        printf("%d", i);

    for(i = 1; i <= 2*(low-1)-1; i++)
        printf("%d", low);

    if (low != 1)
        for(i = low; i <= high; i++)
            printf("%d", i);
    else
        for(i = low+1; i <= high; i++)
            printf("%d", i);


}


int main()
{

    int i,num;

    do {
        scanf("%d", &num);

    }
    while (num % 2 == 0 || num < 0);

    for(i = num; i > 1; i--) {
        num_pattern(num, i);
        printf("\n" );
    }


    for(i = 1; i <= num; i++) {
        num_pattern(num, i);
        printf("\n" );
    }





    return 0;
}