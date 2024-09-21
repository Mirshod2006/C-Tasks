// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(){
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int* num = (int *)calloc(n, sizeof(int));
//     if(num==NULL){
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter number series!\n");
//     for(int j = 0;j<n;j++){
//         printf("%d:",j+1);scanf("%d",&num[j]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(num[j]<num[j+1]){    
//             int temp = num[j];
//             num[j] = num[j+1];
//             num[j+1] = temp;
//         }
//         }
//     }
//     for(int j = 0;j<n;j++){
//         printf("%d, ",num[j]);
//     }
//     free(num);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Prompt user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int* num = (int *)malloc(n*sizeof(int));
    if (num == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter number series!\n");
    for (int j = 0; j < n; j++) {
        printf("%d: ", j + 1);
        scanf("%d", &num[j]);  // Ensure proper input
    }

    // Print array after input for debugging
    printf("Array after input:\n");
    for (int j = 0; j < n; j++) {
        printf("%d, ", num[j]);
    }
    printf("\n");

    // Sorting the array in descending order using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] < num[j + 1]) {
                // Swap elements
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array in descending order:\n");
    for (int j = 0; j < n; j++) {
        printf("%d, ", num[j]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(num);

    return 0;
}
