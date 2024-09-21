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
        A[i] = rand()%10;
    }
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(A[i] ==! A[j]){
                printf("%i ",A[i]);
            }
        }
    }
    return 0;
}