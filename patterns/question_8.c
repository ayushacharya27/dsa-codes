#include <stdio.h>
#include <stdlib.h>

// Print 1
//       0 1
//       1 0 1.....


// so i am thinking to start with 1 for even and 0 for odd and then continue
int main(){

    int n ;
    scanf("%d",&n);
    

    for(int i = 0 ;i < n ; i++){
        int zero_flag = 0;
        int one_flag = 0;
        for(int j = 0 ; j < i+1 ;j++){
            //int a = j;
            
            if((i%2==0 && one_flag==0 && j==0) || (j>0 && one_flag==0)){
                printf("1 ");
                zero_flag=0;
                one_flag=1;
                //printf("ayush");
                 
            }
            else {//if(i%2!=0 && one_flag==0)  {
                printf("0 ");
                zero_flag=1;
                one_flag=0;

            }
            
        }
        printf("\n");

    }

     
    return 0;
}