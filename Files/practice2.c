#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fl = fopen("file1.py","a");
    // fputc --- this function only puts an character to the file
    // But, fputs --- puts the whole sentence to the file
    fputs("\nprint('Hello world!')",fl);
    int result = system("python file1.py");
    fclose(fl);
    fl = fopen("new","r");
    char str;
    while((str=fgetc(fl))!=EOF){
        printf("%c",str);
    }
    puts(" ");
    return 0;
}