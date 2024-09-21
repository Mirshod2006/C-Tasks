#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void checkAnagram(char sent1[],char sent2[],int len){ // iterative approach
    bool check = true;
    for(int i = 0;i<len;i++){
        int cont1 = 0;
        int cont2 = 0;
        for(int j = 0;j<len;j++){
            if(sent1[i]==sent1[j]){
                cont1++;
            }
            if(sent1[i]==sent2[j]){
                cont1++;
            }
        }
        if(cont1==cont2){
            check = check & true;
        }else{
            check = check & false;
        }
    }
    if(check){
        printf("Yes");
    }else{
        printf("No");
    }
}
int main(){
    char text1[13];
    char text2[13];
    printf("Enter the text-1:");
    scanf("%[^\n]s",text1);
    getchar();
    printf("Enter the text-2:");
    scanf("%[^\n]s",text2);

    int num = strlen(text1);
    if(strlen(text1)==strlen(text2)){
        checkAnagram(text1,text2,num);
    }else{
        printf("No");
    }
    return 0;
}