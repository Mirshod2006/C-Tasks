#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char gap[100];
    printf("Bironta gap kiriting : ");
    scanf("%[^\n]s",gap);
        if(!isupper(gap[0])){
            gap[0] = toupper(gap[0]);
        }
        if(!ispunct(gap[strlen(gap)-1])){
            strcat(gap,".");
        }   
        puts(gap);
    return 0;
}