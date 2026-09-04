#include<stdio.h>
#include<math.h>

void makeStrReverse(char arr1[], char arr2[], const int size) {

    int i;

    for(i=0; i < size; i++) {
        arr2[size-1-i] = arr1[i];
    }
    arr2[size]= 0;

}

int main()
{

    char ans[10], mainAns[10];
    char hexD;
    float temp;
    long int num;
    int cases, i, j, hexC;

    scanf("%d", &cases);
    // printf("\n");

    for(i= 0; i<cases; i++) {

        hexC = 0;

        do {
            scanf("%d", &num);
        } while (num < 0 || num > 2147483647);

        if (num == 0)
            printf("%d", 0);

        else {
            while(num != 0) {

                temp = num % 16;

                if (temp < 10) {
                    hexD = temp + '0';
                    ans[hexC] = hexD;
                }

                else if (temp >= 10) {
                    hexD = temp + 55;
                    ans[hexC] = hexD;
                }

                hexC++;
                num /= 16;



            }

            ans[hexC] = 0;
            makeStrReverse(ans, mainAns, hexC);

            // printf("%s \n", ans);
            printf("%s", mainAns);
        }
        printf("\n");
    }
    return 0;
}