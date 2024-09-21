#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return 0;
}