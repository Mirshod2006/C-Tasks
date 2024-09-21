#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Array[10]={11,21,54,2,12,70,35,93,20,1};
    int *ptr1 = Array;
    int *ptr2 = ptr1+9;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    for(int i=0;i<10;i++){
        printf("%d ",Array[i]);
    }
    return 0;
}