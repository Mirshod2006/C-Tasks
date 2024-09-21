#include <stdio.h>

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Raqamlarni ko'rsat : ");
    for(int i=0;i<=9;i++){
        printf("\n");
        printf("%i -son : %i",i+1,A[i]);
    }
    return 0;
}
// printf() shows the element 
// scanf() gets the element