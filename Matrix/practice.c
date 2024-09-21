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
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            A[i][j] = rand()%200;
        }
        for(int j = 0; j<m;j++){
            printf("%3d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}