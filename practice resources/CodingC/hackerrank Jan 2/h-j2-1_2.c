#include<stdio.h>

int main()
{

    int arr[10], k, i;
    
    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);
    
    do {
        scanf("%d", &k);  
    } while (k < 1 || k > 10);   
      
    printf("%d", arr[k-1]);
            
    return 0;
}