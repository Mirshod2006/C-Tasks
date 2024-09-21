#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("somefile.txt","w");
    char text[100];
    printf("Enter text to write to file:");
    scanf("%[^\n]s",text);
    char word[30];
    int i=0,j=0;
    while(text[i]!='\0'){
        if(isspace(text[i])){
            word[j]='\0';
            fputs(word,fp);
            fputc('\n',fp);
            j=0;
            i++;
            continue;
        }
        word[j]=text[i];
        i++;
        j++;
    }
    if (j > 0) {
        word[j] = '\0';
        fputs(word, fp);
        fputc('\n', fp);  // Add newline after the last word
    }
    fclose(fp);
    return 0;
}
