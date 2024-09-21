#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    // char text[6] = "Salom";
    // printf("text=%s\n",text);
    // int n = strlen(text);
    // printf("strlen(text)=%d\n",n);
    // for(int t=0;t<6;t++){
    //     if(text[t]=='\0'){
    //         puts("0");
    //     }
    //     printf("%c ",text[t]);
    // }
    char matn[30];
    printf("matn = ");
    scanf("%[^\n]s",matn);
    printf("Matn = %s\n",matn);
    puts(matn);
    int k=0;
    int n = 0;
    for(int i=0;i<strlen(matn);i++){
        if(isalpha(matn[i])){
            k++;
        }
        if(isalnum(matn[i])){
            n++;
        }
        if(isdigit(matn[i])){
            n++;
        }
        if(isspace(matn[i])){
            n++;
        }
        if(isupper(matn[i])){
            n++;
        }
        if(islower(matn[i])){
            n++;
        }
    }
    printf("Number of Latin words : %2d\n",k);
    printf("Number of Latin nums : %2d",n);
    return 0;
}