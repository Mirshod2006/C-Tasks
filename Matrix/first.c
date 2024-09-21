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
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            A[i][j] = rand()%10;
            B[i] += A[i][j];
        }
        for(int j = 0; j<m;j++){
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
    for(int j = 0; j<n;j++){
            printf("%i - row sum: %d",j+1,B[j]);
            printf("\n");
        }
    
    return 0;
}