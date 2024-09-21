#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSequence(char number[],int len){ // iterative approach
    int sum = 0;
    char son1[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son1[j] = number[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){    
        printf("%d ",toascii(son1[i])-48);
    }
}
int main(){
    char text1[30];
    printf("Enter the num:");
    scanf("%[^\n]s",text1);
    int num = strlen(text1);
    showSequence(text1,num);
    
    return 0;
}