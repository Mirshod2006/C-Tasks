#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n;
    printf("Enter number for columns and rows : ");
    scanf("%d",&n);
    int A[n][n];
    int B[n][n];
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<n;j++){
            A[i][j] = rand()%10;
            B[j][i] =  A[i][j];
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}