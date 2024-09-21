#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSummation(char number[],int len){ // iterative approach
    int sum = 0;
    char son1[30];
    char son2[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son1[j] = number[i];
            j++;
        }
    }
    int k = 0;
    for(int i=j-1;i>=0;i--){    
        son2[k] = son1[i];
        k++;
    }
    for(int i=0;i<j;i++){    
        printf("%d ",toascii(son2[i])-48);
    }
}
int main(){
    char text1[30];
    printf("Enter the num:");
    scanf("%[^\n]s",text1);
    int num = strlen(text1);
    showSummation(text1,num);
    
    return 0;
}