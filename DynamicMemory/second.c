#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;

    // Dynamically allocate memory for the array
    int* num = (int *)malloc(n*sizeof(int));
    int j =0;
    printf("Enter three numbers!\n");
    while(j<3){
        printf("Enter %d-number:",j+1);scanf("%d",&num[j]);
        if(j==0&&num[j]>31){
            printf("Error: Number is greater than 31\n");
            continue;
        }
        if(j==1&&num[j]>12){
            printf("Error: Number is greater than 12\n");
            continue;
        }
        if(j==2&&(num[j]==12||num[j]==1||num[j]==2)){
            printf("Qish deb chiqarib bersin!\n");
        }
        j++;
    }

    // Free dynamically allocated memory
    free(num);

    return 0;
}
