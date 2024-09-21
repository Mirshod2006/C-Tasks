#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void showSequence(char number[],int len){ // iterative approach
    int num[30];
    int son;
    char son1[30];
    int j = 0;
    for(int i = 0;i<len;i++){
        if(isdigit(number[i])){
            son1[j] = number[i];
            j++;
        }
    }
    son = atoi(son1);
    int k=0;
    for(int i=2;i<son;i++){
        if(son%i==0){
            num[k] = i;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        bool tub = true;
        for(int j=2;j<num[i];j++){
        if(num[i]%j==0){
            tub = tub & false;
        }
    }
    if(tub){
        printf("%i ",num[i]);
    }
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