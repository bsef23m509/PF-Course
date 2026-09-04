#include<stdio.h>

int main()
{
    
    int size = 10;
    int arr[size],k, i, j, loop, temp;
    int res[size];
    
    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);
        
    do {
        scanf("%d", &k);  
    } while (k < 1 || k >= 10);    
    
    
    for(i = 0; i < k; i++) {
    
        loop = size-1-i;
    
        for(j = loop; j > 0; j--) {
        
            res[j-1] = arr[j];
        
        }
        
        arr[loop] = 0;
        
        for(j = loop; j > 0; j--) {
        
            arr[j] = res[j];
        
        }
        
        
    
    }
    
    
    for(i = 0; i < size - k; i++)
        printf("%d ", res[i]);    
        
            
    return 0;
}