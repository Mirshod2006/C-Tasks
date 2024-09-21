#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n,m;
    printf("Enter number of Rows : ");
    scanf("%d",&n);
    printf("Enter number of Columns : ");
    scanf("%d",&m);
    int A[n][m];
    int B[n];
    int C[n];
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            A[i][j] = rand()%10;
            if(i==j){
                B[i] = A[i][j];
            }
            if(i+j==n-1){
                C[i] = A[i][j];
            }
        }
        for(int j = 0; j<m;j++){
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            if(i==j){
                A[i][j]=C[i];
            }
            if(i+j==n-1){
                A[i][j]=B[i];
            }
        }
        for(int j = 0; j<m;j++){
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}