#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSequence(char number[],int len){ // iterative approach
    int count = 0;
    int var1 = 0;
    int var2 = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i]) && count==0){
            var1 =  toascii(number[i])-48;
            count++;
        }else 
        if(isdigit(number[i]) && count==1){
            var2 = toascii(number[i])-48;
            break;
        }
    }
    for(int i=var1;i<=var2;i++){
            printf("%i ",i);
    }
}
int main(){
    char text1[13];
    printf("Enter the num:");
    scanf("%[^\n]s",text1);
    int num = strlen(text1);
    showSequence(text1,num);
    
    return 0;
}