#include <stdio.h>
// 65-A
// 97-a

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0 ;i < n ;i++){
        for(int j = 0 ; j < i+1 ;j++){
            printf("%c",65+j);
        }
        printf("\n");
    }

      
    return 0;
}
