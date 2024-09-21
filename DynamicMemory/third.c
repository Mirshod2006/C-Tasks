#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));

    // Dynamically allocate memory for the array
    int* num = (int *)malloc(10*sizeof(int));
    int* guess = (int *)malloc(10*sizeof(int));
    int j =0;
    printf("Enter guess the number even or odd!\n");
    printf("If even enter 0 or enter 1!\n");
    for(int i=0;i<10;i++){
        num[i] = rand()%100-50;
    }
    int goals=0;
    while(j<10){
        printf("Enter your guess for %d-number:",j+1);scanf("%d",&guess[j]);
        if(num[j]%2==guess[j]){
            goals +=1;
        }
        j++;
    }
    if(goals>=5){
        printf("%dta gol!\n",goals);
        printf("Foydalanuvchi yutdi!");
    }else{
        printf("%dta gol!\n",goals);
        printf("Foydalanuvchi yutqazdi!");
    }
    // Free dynamically allocated memory
    free(num);
    free(guess);

    return 0;
}
