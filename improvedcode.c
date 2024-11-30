#include <stdio.h>
#include <stdlib.h>

int input(int **array, int *n);
void output(int *array, int n);

int main(void) {
    int *array = NULL;
    int n = 0;

    if (input(&array, &n)) {
        return 1;
    }

    output(array, n);

    free(array);  // Free dynamically allocated memory
    return 0;
}

int input(int **array, int *n) {
    int temp;
    int capacity = 1;
    *array = (int *)malloc(capacity * sizeof(int));  // Allocate initial memory
    if (*array == NULL) {
        printf("n/a");
        return 1;
    }

    while (1) {
        if (scanf("%d", &temp) != 1) {
            printf("n/a");
            free(*array);  // Free memory on error
            return 1;
        }

        if (temp <= -1) {
            break;
        }

        if (*n == capacity) {  // Resize if needed
            capacity *= 2;
            int *new_array = (int *)realloc(*array, capacity * sizeof(int));
            if (new_array == NULL) {
                printf("n/a");
                free(*array);
                return 1;
            }
            *array = new_array;
        }

        (*array)[(*n)++] = temp;  // Append value
    }

    return 0;
}

void output(int *array, int n) {
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }

    int max = array[0], min = array[0];
    int max_pos = 0, min_pos = 0;

    // Find max and min positions
    for (int i = 0; i < n; ++i) {
        if (array[i] > max) {
            max = array[i];
            max_pos = i;
        }
        if (array[i] < min) {
            min = array[i];
            min_pos = i;
        }
    }

    // Print the array with swapped max and min
    for (int i = 0; i < n; ++i) {
        if (i == max_pos) {
            printf("%d", min);
        } else if (i == min_pos) {
            printf("%d", max);
        } else {
            printf("%d", array[i]);
        }

        if (i != n - 1) {
            printf(" ");
        }
    }

    printf("\n");
}
