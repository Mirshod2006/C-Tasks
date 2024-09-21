#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n;
    int *numbers;
    printf("n=");scanf("%d",&n);
    numbers =(int *)calloc(n,sizeof(int));
    return 0;
}