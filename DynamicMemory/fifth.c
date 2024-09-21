#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    srand(time(0));
    char* expression = (char *)malloc(100*sizeof(char));
    printf("Input any math expression:");scanf("%s",expression);
    int numbers[100];
    int j =0;
    for(int i=0;i<strlen(expression);){
        char integer[10];
        int k=0;
        while(isdigit(expression[i])){
            integer[k++]=expression[i++];
        }
        if(k>0){
            integer[k] = '\0';
            numbers[j++]=atoi(integer);
        }
        i++;
    }
    for(int x=0;x<j;x++){
        printf("%d ",numbers[x]);
    }
    printf("\n");
    for(int a=0;a<j;a++){
        for(int b=0;b<j-a-1;b++){
            if(numbers[b]>numbers[b+1]){
                int temp = numbers[b];
                numbers[b] = numbers[b+1];
                numbers[b+1]=temp;
                }
        }
    }
    for(int x=0;x<j;x++){
        printf("%d ",numbers[x]);
    }
    free(expression);

    return 0;
}
