#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n;
    printf("Enter number for columns and rows : ");
    scanf("%d",&n);
    int A[n][n];
    int max = 0, min = 0;
    int max_i = 0,max_j = 0;
    int min_i=0,min_j=0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<n;j++){
            A[i][j] = rand()%10;
            if(A[i][j]>max){
                max = A[i][j];
                max_i = i;
                max_j = j;
            }
            if(A[i][j]<min){
                min = A[j][j];
                min_i = i;
                min_j = j;
            }
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
    printf("%d ta",(((max_i*n+max_j)-(min_i*n+min_j))>0?((max_i*n+max_j)-(min_i*n+min_j)):((min_i*n+min_j)-(max_i*n+max_j)))-2);
    
    return 0;
}