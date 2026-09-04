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

int find_in_arr(int arr[], const int size, int n) {

    int i;
    
    for(i= 0; i < size && arr[i] != n; i++) ;
        
    if(i == size)
        return 0;
    return 1;    
}

int main()
{

    int arr[10], min, max, start, end, i, j;

    for(i= 0; i < 10; i++)
        scanf("%d", &arr[i]);

    max = find_max(arr, 10);
    min = find_min(arr, 10);
    
    for(i = min; i <= max; i++) {
    
        start = i;
        
        if(!(find_in_arr(arr, 10, start)))
            continue;
            
            
        printf("%d ", start);
        
        for(j= 0; j < 10; j++) {
        
            if(arr[j] == i) {
                i++;
                j=0;
                
            }    
        
        }
        
        end = i-1;
        
        if(start != end)
            printf("%d", end);
            
        printf("\n");
        
    }
    return 0;
}