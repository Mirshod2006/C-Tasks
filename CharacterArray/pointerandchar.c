#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void reverse(char *s){
    char temp;
    int n = strlen(s);
    for(int i = 0;i<n/2;i++){
        temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
}

void kiritish(int *a){
    printf("son= ");
    scanf("%d",a);
}

void chiqarish(int a){
    printf("son= %d",a);
}

int main(){
    
    srand(time(0));
    char text[100];
    int num;
    kiritish(&num);
    chiqarish(num);
    // printf("Pls, enter the text: ");
    // scanf("%[^\n]s",text);
    // reverse(text);
    // puts(text);
    return 0;
}