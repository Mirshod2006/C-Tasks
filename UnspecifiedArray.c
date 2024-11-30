#include <stdio.h>
#include <stdlib.h>

int input(int **array,int *n);
void output(int *array,int n);

int main(void){
    int n = 0;
    int *array = NULL;
    if(input(&array,&n)){
        return 1;
    }
    output(array,n);
    free(array);
    return 0;
}

int input(int **array,int *n){
    int temp;
    int size = 1;
    *array = (int *)malloc(size * sizeof(int));
    if(*array == NULL){
        printf("n/a");
        return 1;
    }
    while (1)
    {
        if(scanf("%d",&temp) != 1){
            free(*array);
            printf("n/a");
            return 1;
        }
        if(temp <= -1){
            break;
        }
        if(*n == size){
            size *=2;
            int *new_array = (int *)realloc(*array,size * sizeof(int));
            if(new_array == NULL){
                printf("n/a");
                free(*array);
                return 1;
            }
            *array = new_array;
        }
        (*array)[(*n)++] = temp;
    }
    return 0;
}

void output(int *array,int n){
    int max = array[0], min = array[0], max_pos = 0, min_pos = 0;
    for(int i = 0; i < n; ++i){
        if(array[i] > max){
            max_pos = i;
            max = array[i];
        }
        if(array[i] < min){
            min_pos = i;
            min = array[i];
        }
    }
    for(int i = 0; i < n; ++i){
        if(i == max_pos){
            printf("%d",min);
        }else if(i == max){
            printf("%d",max);
        }else{
            printf("%d",array[i]);
        }
        if(i != n-1){
            printf(" ");
        }
    }
}