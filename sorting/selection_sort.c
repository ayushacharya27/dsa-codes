#include <stdio.h>


int main(){
    int arr[5] ={164,225,12,202,11};

    int selected = 0 ;
    for(selected = 0 ; selected<5 ;selected++){
         
        int min = 10000000;
        int min_idx ;
        for(int i = selected+1 ; i < 5 ; i++ ){
            if(arr[i]<min){
                min = arr[i];
                min_idx=i;
            }
        }
        //printf("Swapping %d and %d\n",arr[selected],min);
        if(arr[selected]>min){ // if condition is mandatory since it swaps unwilling number also
        int temp = arr[selected];
        arr[selected] = arr[min_idx];
        arr[min_idx] = temp;
        }
        
    }
    for(int i = 0 ; i < 5 ;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}