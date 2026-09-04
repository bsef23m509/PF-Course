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
            count++;
        
    printf("%d", count);
            
    return 0;
}