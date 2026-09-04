#include<stdio.h>

int main()
{

    int arr[10], i, sum=0, count = 0;
    float average;
    
    for(i= 0; i< 10; i++)
        scanf("%d", &arr[i]);
        
    for(i= 0; i< 10; i++)
        sum += arr[i];
    
    average = sum/10.0;
    
    for(i= 0; i< 10; i++)
        if(arr[i] > average)
            printf("%d is larger\n", arr[i]);
        else if(arr[i] < average)
            printf("%d is smaller\n", arr[i]);
    
            
    return 0;
}