#include<stdio.h>


int valid (char str[]) {

    int i;
    
    for(i= 0; str[i] != 0 && str[i] >= '0' && str[i] <= '9'; i++) ;

    if (str[i] == 0 && i < 100)
        return 0;
    return 1;    

}

int main()
{

    char str[200];
    int ans[5], max = 0, ansC, num;
    int cases, i, j, k, len;

    scanf("%d", &cases);
    // printf("\n");

    for(i= 0; i<cases; i++) {
        
        
        scanf(" ", &str[0]);
        
        do {
            gets(str);
        } while (valid(str));
        
        

        for(len=0; str[len] != 0; len++) {}
       //  printf("%s",  str);
        
        // printf("%d",  len);
        if(len <= 5)
            printf("%s",  str);
            
        else {
        
            for(j = 0; j <= len-5; j++) {
                num = 0;
                
                for(k = j; k < j+5; k++) {

                    num = (num * 10) + str[k] - '0';
                   // printf("%c %d \n", str[k], num);
                }
                
                if (num > max)
                    max = num;
                
                }
                // printf("%d", arrToInt(ans, 5));
        }
        
        printf("%d", max);
        printf("\n");
    }
    return 0;
}