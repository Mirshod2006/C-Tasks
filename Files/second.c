#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("oldOne.txt","r");
    char text[100];
    fscanf(fp,"%[^\n]s",text);
    fclose(fp);
    fp = fopen("newOne.txt","w");
    int sum =0;
    char num[30];
    int i=0,j=0;
    while(text[i]!='\0'){
        if(isspace(text[i])){
            num[j]='\0';
            sum +=atoi(num);
            j=0;
            i++;
            continue;
        }
        num[j]=text[i];
        i++;
        j++;
    }
    if (j > 0) {
        num[j] = '\0';
        sum +=atoi(num);  // Add newline after the last word
    }
    fprintf(fp,"%d",sum);
    fclose(fp);
    return 0;
}
