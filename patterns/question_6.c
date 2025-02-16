#include <stdio.h>
#include <stdlib.h>

int main(){

    int n ;
    scanf("%d",&n);
    

     
    // for ith row (n-i) - 1 spaces , i.e. 1st row (5-1) - 1 = 4-1 = 3
    // for ith row number of stars i+1

    // got the answer !!



    // rows for loop
    for(int i = 0 ; i < n ; i++){
        // spaces for loop
        for(int j = 0 ; j<=(n-i)-1 ;j++){
            printf(" ");
        }

        // stars up till middle
        for(int k = 0 ; k <= i ;k++){
            printf("*");
        }

        // stars after middle
        for(int k = 0 ; k <= i-1 ;k++){
            printf("*");
        }

        printf("\n");

    }
    return 0;
}