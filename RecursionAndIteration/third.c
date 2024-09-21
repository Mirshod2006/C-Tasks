#include <stdio.h>
#include <stdlib.h>

void sortArr(int arr[],int len){ // iterative approach
    int temp;
    for(int i =0;i<len;i++){
        for(int j = 0;j<len;j++){
            if(arr[i]<=arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Max multiplication: %d ",(arr[len-1]*arr[len-2]));
}
int main(){
    int num[30]={1,2,3,4,1,2,4,0,2,5,5,2,8};
    int len = 13;
    sortArr(num,len);
}