#include<stdio.h>

int absolute (int num) {

    if(num < 0)
        return -(num);
    return num;

}

int align_to_num_sum(int arr[], const int size, num) {

    int i, j;
    //int res[size];
    int align_sum = 0;
    int temp;


    for(i = 0; i < size; i++) {

        temp = arr[i] % 10;
        temp = absolute(temp - num);
        if(temp > 5)
            align_sum += (10-temp);
        else
            align_sum += temp;
    }

    return align_sum;


}

int main()
{

    int size = 10;
    int arr[size], i, j;
    int temp;
    int min_align_sum = 100;

    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);

    for(i= 0; i < 10; i++) {

        temp = align_to_num_sum(arr, size, i);
        if(temp < min_align_sum)
            min_align_sum = temp;

    }

    printf("%d", min_align_sum);

    return 0;
}