#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(){
    // int sonlar[5] = {11,12,13,14,15};
    // int *ptr;
    // ptr = sonlar;
    // printf("sonning joylashgan o'rni : %p \nsonning qiymati : %i",ptr,*ptr);
    // ptr++;
    // printf("\nsonning joylashgan o'rni : %p \nsonning qiymati : %i",ptr,*ptr);
    // ptr += 4;
    // printf("\nsonning joylashgan o'rni : %p \nsonning qiymati : %i",ptr,*ptr);
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("\nFirst number : %d",num1);
    printf("\nSecond number : %d",num2);
    swap(&num1,&num2);
    printf("\nFirst number : %d",num1);
    printf("\nSecond number : %d",num2);
    return 0;
}