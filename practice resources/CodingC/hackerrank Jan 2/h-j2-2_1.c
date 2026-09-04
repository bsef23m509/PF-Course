#include<stdio.h>

int main()
{

    int arr[10], i;
    
    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);
        
    for(i= 0; i< 9; i++)
        printf("%d %d\n", arr[i], arr[i+1]);
            
    return 0;
}