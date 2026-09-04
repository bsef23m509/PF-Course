#include<stdio.h>

int main()
{

    int count=0;
    int numCount;
    int num;

    scanf("%d", &numCount);

    for(int i=0; i < numCount; i++) {

        scanf("%d", &num);

        while (num != 1) {
            if (num%6 == 0) {
                num /= 6.0;
                count++;
            }
            else if (num%2 !=0) {
                num *=2;
                count++;
            }
            else {
                count = -1;
                break;
            }
        }


        printf("%d \n",  count);
        
        count = 0;


    }




    return 0;
}