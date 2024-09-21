#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int A[5] = {1,2,3,4,5};
    int *ptr;
    int max = A[0];
    int i = 0;
    for(ptr = A;i<5;ptr++){
        if(*ptr>max){
            max = *ptr;
        }
        i++;
    }
    printf("Max : %d",max);
    return 0;
}