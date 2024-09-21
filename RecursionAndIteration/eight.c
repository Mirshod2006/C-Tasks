#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSummation(char number[],int len){ // iterative approach
    int sum = 0;
    char son[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son[j] = number[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){    
        sum +=toascii(son[i])-48;
    }
    printf("%d",sum);
}
int main(){
    char text1[30];
    printf("Enter the num:");
    scanf("%[^\n]s",text1);
    int num = strlen(text1);
    showSummation(text1,num);
    
    return 0;
}