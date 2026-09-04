#include<stdio.h>

int average (int num1, int num2) {

    int sum = num1+num2;
    return sum/2;

}

int absolute (int num) {

    if(num < 0)
        return -(num);
    return num;    

}

int main()
{
    
    int size = 10;
    int arr[size],k, i, j, avg;
    
    for(i= 0; i< size; i++)
        scanf("%d", &arr[i]);
        
    scanf("%d", &k);  
    
    for(i = 1; i < size-1; i++) {
    
        avg = average(arr[i-1], arr[i+1]);
        
        if(absolute(arr[i] - avg) > k)
            arr[i] = avg;
    
    }
        
    
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);    
        
            
    return 0;
}