#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSequence(char number[],int len){ // iterative approach
    bool tub = true;
    int num = 0;
    char son1[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son1[j] = number[i];
            j++;
        }
    }
    num = atoi(son1);
    for(int i=2;i<num;i++){
        if(num%i==0){
            tub = tub & false;
            break;
        }else{
            tub = tub & true;
        }
    }
    if(tub){
        printf("tub son");
    }else{
        printf("tub son emas");
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