#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fl = fopen("text.txt","w");
    char str[100];
    printf("Enter the sentence: ");scanf("%[^\n]s",str);
    fputs(str,fl);
    fclose(fl);
    fl = fopen("text.txt","r");
    char matn[100]="";
    fgets(matn,100,fl);
    printf("Text of file: ");
    puts(matn);
    fclose(fl);
    return 0;
}