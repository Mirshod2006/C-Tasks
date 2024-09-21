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
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            A[i][j] = val;
            val++;
        }
        i++;
        for(int j = m-1; j>=0;j--){
            A[i][j] = val;
            val++;
        }
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}