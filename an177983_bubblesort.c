//Anna Del Negro
//Lab assignment #7

#include <stdlib.h>
#include <stdio.h>

void bubblesort(int num_arr[], int n);

int main(){
    int n=9;
    int num_arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubblesort(num_arr, n);
}

void bubblesort(int num_arr[], int n){
    int num_swaps=0;
    int iteration=0;
    int i, j, k;

    for(i=0; i<n-1; i++){
        iteration++;
        num_swaps=0;
        for(j=0; j<n-i-1; j++){
            if(num_arr[j]>num_arr[j+1]){
                //swap
                k=num_arr[j];
                num_arr[j]=num_arr[j+1];
                num_arr[j+1]=k;
                num_swaps++;
            }
        }
      printf("Iteration #%d: %d\n", iteration, num_swaps);
    }
}