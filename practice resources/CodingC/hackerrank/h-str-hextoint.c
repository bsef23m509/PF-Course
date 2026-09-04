#include<stdio.h>
#include<math.h>


int valid (char str[]) {

    int i;

    for(i= 0; str[i] != 0 && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F')); i++) ;

    if (str[i] == 0 && i < 10)
        return 0;
    return 1;

}

int main()
{

    char str[15];
    float temp;
    long int ans;
    int cases, i, j, hexD, powC;

    scanf("%d", &cases);
    scanf("%c", &str[0]);
    // printf("\n");

    for(i= 0; i<cases; i++) {

        do {
           // char str[15];
            hexD = 0;
            ans = 0;
            powC = 0;

            

            do {
                gets(str);
            } while (valid(str));

            for(j=0; str[j] != 0; j++) {}

            for (j = j - 1; j >= 0; j--, powC++) {

                // printf("%d \n", str[j]);
                if (str[j] >= '0' && str[j] <= '9') {
                    hexD = str[j] - '0';
                    // printf("%d \n", hexD);
                }

                else if (str[j] >= 'A' && str[j] <= 'F') {
                    hexD = str[j] - 55;
                    // printf("%d \n", hexD);
                }

                else {
                    hexD = 0;
                    powC--;
                }


                temp = hexD * (pow(16, powC));
                // printf("%f \n", temp);
                ans = ans + temp;



            }

        } while (ans < 0 || ans > 2147483647);
        
        printf("%d", ans);
        printf("\n");
    }
    return 0;
}