#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char sent[],int len){ // iterative approach
    char arr[len+1];
    int j =0;
    for(int i=len-1;i>=0;i--){
        arr[j]=sent[i];
        j++;
    }
    int con=0;
    while(con<len){
        char temp[50];        
        int k = 0;
        while(con<len && !isspace(arr[con])){
            temp[k] = arr[con];
            con++;
            k++;
        } // Get help from chat gpt To mitigate this above
        // part of the algorithm
        temp[k] = '\0';
        for(int a=k-1;a>=0;a--){
            printf("%c",temp[a]);
        }
        if(isspace(arr[con])){
            printf(" ");
            con++;
        }
    }
    printf("\n");
}
int main(){
    char text[30];
    printf("Enter the text:");
    scanf("%[^\n]s",text);
    int num = strlen(text);
    reverseWords(text,num);
}