#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSummation(char number[],int len){ // iterative approach
    int sum = 0;
    int var = 0;
    char son[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son[j] = number[i];
            j++;
        }
    }
    var = atoi(son);
    for(int i=0;i<=var;i++){
        if(i+1==var+1){
            printf("%i=",i);
        }else if(i>0){
            printf("%i+",i);
        }
        sum +=i;
    }
    printf("%d",sum);
}
int main(){
    char text1[13];
    printf("Enter the num:");
    scanf("%[^\n]s",text1);
    int num = strlen(text1);
    showSummation(text1,num);
    
    return 0;
}