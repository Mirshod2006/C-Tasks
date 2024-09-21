#include <stdio.h>
#include <stdlib.h>

void showMatrix(int n){ // iterative approach
    int matrix[n][n];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            int min_distance = i < n-i ? i : n-i-1;
            min_distance = min_distance<j?min_distance:j;
            min_distance = min_distance<n-j-1?min_distance:n-j-1;
            matrix[i][j] = min_distance+1;
        }
    }
    // I get help from chat GPT!
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ,",matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    showMatrix(2*num-1);
}