#include<stdio.h>

int main()
{
    
    int size = 10;
    int arr[size],k, i, j;
    int res[size];
    
    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);
        
    do {
        scanf("%d", &k);  
    } while (k < 1 || k >= 10);    
    
    
    for(i = 0; i < k; i++) {
    
        for(j= 0; j < size-1-i; j++) {
        
            res[j] = arr[j] - arr[j+1];
        
        }
        
        for(j= 0; j < size-1-i; j++) {
        
            arr[j] = res[j];
        
        }
    
    }
    
    
    for(i = 0; i < size - k; i++)
        printf("%d ", res[i]);    
        
            
    return 0;
}