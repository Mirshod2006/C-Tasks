#include <stdio.h>
#include <stdlib.h>

void showCommon(int arr[],int len){ // iterative approach
    int number = arr[0];
    int pre_count=0;
    for(int i =0;i<len;i++){
        int count = 0;
        for(int j = 0;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>=pre_count){
                pre_count=count;
                number = arr[i];
            }
        }
    }
    printf("Most Common Number: %d ",number);
}
int main(){
    int num[30]={1,2,3,4,1,2,4,2,5,5,2,8,8};
    int len = 13;
    showCommon(num,len);
}