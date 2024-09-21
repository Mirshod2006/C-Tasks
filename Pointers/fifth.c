#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Array[10]={11,21,54,2,12,70,35,93,20,1};
    int *ptr1;
    int i = 0;
    int max = Array[0];
    int min = Array[0];
    int in_max = 0;
    int in_min = 0;
    for(ptr1=Array;i<10;ptr1++){
        if(*ptr1>max){
            max = *ptr1;
            in_max=i;
        }
        if(*ptr1<max){
            min = *ptr1;
            in_min=i;
        }
        i++;
    }
    Array[in_max] = min;
    Array[in_min] = max;
    for(int i=0;i<10;i++){
        printf("%d ",Array[i]);
    }
    return 0;
}