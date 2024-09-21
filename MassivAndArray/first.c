#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[10] = {2,4,5,8,1,9,10,7,3,6};
    for(int i=0;i<10;i++){
        int temp = 0;
        for(int j = i;j<10;j++){
            if(A[i]>A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("Second min : %i",A[1]);
    return 0;
}