#include<stdio.h>

int giveNextPrime(int prev) {

    int i,j, count = 0, next;

    for(i = prev+1; i<= 999999; i++) {

        // printf("hello");
        for(j = 2; j < i; j++) {
            //printf("hello");
            if (i%j == 0)    {
                count++;
                break;
            }
        }

        if (count == 0) {
            next = i;
            break;
        }

        count = 0;
        //printf("hello");

    }

    return next;

}

int main()
{
    int i, j, num = 5, prime = 2;

    for(i = 1; i <= num; i++) {

        for(j = 1; j <= i; j++) {
            printf("%d ", prime);
            prime = giveNextPrime(prime);
        }
        
        printf("\n");

    }



    return 0;
}