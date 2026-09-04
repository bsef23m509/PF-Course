#include<stdio.h>

int main()
{

    int arr[10], i, j;

    for(i= 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i= 0; i < 9; i++) {
        if(arr[i+1] > arr[i]) {
            j=1;
            printf("%d ", arr[i]);
            while((i+ j < 10) && arr[i+j] > arr[i+j-1]) {
                printf("%d ", arr[i+j]);
                j++;
            }
            i+=(j-2);
           // printf("\n");
        }
        else if (arr[i+1] < arr[i]) {
            j=1;
            printf("%d ", arr[i]);
            while((i+ j < 10) && arr[i+j] < arr[i+j-1]) {
                printf("%d ", arr[i+j]);
                j++;
            }
            i+=(j-2);
            //printf("\n");

        }
        printf("\n");

    }

    return 0;
}