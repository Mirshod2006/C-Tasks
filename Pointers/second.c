#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float number;
    printf("Enter float : ");
    scanf("%f",&number);
    int i_number = (int)number;
    int *n = &i_number;
    printf("n : %i\n", *n); 
    return 0;
}