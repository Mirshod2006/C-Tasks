#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    srand(time(0));
    printf("Enter number of elements : ");
    scanf("%i ",&n);
    int A[n];
    for(int i=0;i<n;i++){
        A[i] = rand()%500;
    }
    int max = A[0];
    int index = 0;
    for(int j=0;j<n;j++){
        if(A[j]>max){
            max = A[j];
            index=j;
        }
    }
    printf("Number of numbers after Max is %i",n-(index+1));
    return 0;
}