#include <stdio.h>
// ith row (n-i-1) space
// number of letters up till middle i+1(Reverse Order) and after middle i(Ascending order)

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n ;i++){
        int a = 0 ;
        for(int j=0 ; j < n-i-1 ; j++){
            printf(" ");
        }
        for(int j = 0 ; j < i+1 ; j++ ){
            printf("%c",65+j);
            a=j;
        }
        for(int j = a ;j > 0 ;j-- ){
            printf("%c",65+j-1);
        }
        printf("\n");
        
    }
    
 

    return 0;
}
