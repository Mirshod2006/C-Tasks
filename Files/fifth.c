#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp = fopen("sumNumbers.txt","r");
    int numbers[100];
    int j=0;
    while(!feof(fp)){
        char c;
        fscanf(fp,"%c",&c);
        if(isdigit(c)){
            numbers[j]= c-'0';
            j++;
        }
    }
    int num[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        int count =0;
        for(int k=0;k<j;k++){
            if(num[i]==numbers[k])count++;
        }
        if(count>=1){
            printf("%dta %d ",count,num[i]);
        }
    }
    fclose(fp);
    return 0;
}
