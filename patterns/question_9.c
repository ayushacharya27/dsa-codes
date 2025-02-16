#include <stdio.h>
#include <stdlib.h>

//print 1      1   number of spaces 6 if rows is 4 , i.e. for ith row we get 2*(n-i) - 2 
//      12    21   number of digits in a row i+1
//      123  321
//      12344321
//
//
//



int main(){
    int n;
    scanf("%d",&n);
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < i+1 ; j++){
            printf("%d",j+1);
        }
        for(int j = 0 ; j < 2*(n-i)-2 ; j++){
            printf(" ");
        }

        for(int j = i ; j >= 0 ; j--){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}