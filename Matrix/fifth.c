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
    int sum = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            A[i][j] = rand()%19-9;
            printf("%2d ",A[i][j]);
        }
        for(int j = 0; j<m;j++){
            if(A[i][j]>=0 && count==1){
                sum += A[i][j];
            }else{
                count = 0;
            }
        }
        printf("\n");
    }
    printf("\n\n");
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m;j++){
            if(A[i][j]>=0 && A[i][j+1]<0){
                printf("%d=",A[i][j]);
                end = 1;
                break;
            }
            else if(A[i][j]>=0){
                printf("%d+",A[i][j]);
            }else{
                printf("First element is negative,\nso sum = ");
                end = 1;
                break;
            }
        }
        if(end==1){
            break;
        }
    }
    printf("%d",sum);   
    return 0;
}