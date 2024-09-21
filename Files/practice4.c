#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("text.txt","r");
    char text[100] = "";
    fscanf(fp,"%s",text);
    puts(text);
    int x = ftell(fp);
    printf("k=%d\n",x);
    fscanf(fp,"%s",text);
    fseek(fp,0,SEEK_END);
    x=ftell(fp);
    printf("k=%d\n",x);
    fclose(fp);
    return 0;
}