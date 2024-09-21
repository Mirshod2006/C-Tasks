#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Array[10]={11,21,54,2,12,70,35,93,20,1};
    int i = 0;
    int sum = 0;
    for(int *ptr = Array;i<10;ptr++){
        sum += *ptr;
        i++;
    }
    printf("Sum of Array : %d",sum);
    return 0;
}