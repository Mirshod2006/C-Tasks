#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("sumNumbers.txt","r");
    int sum = 0;
    while(!feof(fp)){
        char num[30]="";
        fscanf(fp,"%s",num);
        if(isdigit(num[0])){
            sum += atoi(num);
        }
    }
    printf("Sum=%d",sum);
    fclose(fp);
    return 0;
}
