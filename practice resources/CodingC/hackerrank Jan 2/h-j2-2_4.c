#include<stdio.h>

int find_max(int arr[], const int size) {

    int i, max = arr[0];
    
    for(i= 1; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    
    return max;
}

int find_min(int arr[], const int size) {

    int i, min = arr[0];
    
    for(i= 1; i < size; i++)
        if(arr[i] < min)
            min = arr[i];
    
    return min;
}

int main()
{

    int arr[10], min, max, count, i, j;

    for(i= 0; i < 10; i++)
        scanf("%d", &arr[i]);

    max = find_max(arr, 10);
    min = find_min(arr, 10);
    
    for(i = min + 1; i < max; i++) {
        count = 0;
        for(j= 0; j < 10; j++)
            if(arr[j] == i)
                count++;
        
        if(count == 0)
            printf("%d ", i);
    }
    return 0;
}