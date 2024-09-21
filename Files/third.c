#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("words.txt","r");
    char c;
    int count = 0;
    while((c=fgetc(fp))!=EOF){
        if(c=='a'||c=='e'||c=='u'||c=='i'||c=='o')count++;
    }
    printf("%dta unli harf bor",count);
    fclose(fp);
    return 0;
}
