// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <stdbool.h>
// #include <string.h>

// int main(){
//     int n=1;
//     char* code = (char *)malloc(n*sizeof(char));
//     FILE *fl;
//     fl=fopen("newfile.py","w");// If we create the file,with "*****.type" it creates with that type!
//     printf("Write your python code, below!\n");
//     printf("To execute the code type 'run'.\n");
//     printf("So, be careful you should not use word 'run',\nif you do not want to execute your code!\n");
//     while(true){
//         if(code-2=='r'&&code-1=='u'&&code=='n'){
//             break;
//         }
//         scanf("%c",code);
//         code++;
//         n++;
//     }
//     printf("\n");
//     printf("\n");
//     printf("=======================================================================================================================");
//     printf("\n");
//     printf("\n");
//     while(!feof(code)){
//         fprintf(fl,code);
//         code++;
//     }
//     int result = system("python newfile.py");
//     printf("\n");
//     printf("\n");
//     printf("=======================================================================================================================");
//     printf("\n");
//     printf("\n");
//     if (result == -1) {
//         printf("Error running Python script.\n");
//     } else {
//         printf("Python script executed successfully.\n");
//     }
//     fclose(fl);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Start with a small buffer and dynamically resize as needed
    int n = 1;
    int buffer_size = 1024; // Initial buffer size
    char* code = (char *)malloc(buffer_size * sizeof(char)); // Allocate memory for code input
    char temp[4]; // To store "run" check
    int index = 0;

    if (code == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    FILE *fl;
    fl = fopen("newfile.py", "w"); // Create a Python file

    if (fl == NULL) {
        printf("Failed to open file for writing.\n");
        free(code);
        return 1;
    }

    printf("Write your Python code, below!\n");
    printf("To execute the code, type 'run' on a new line.\n");
    printf("Be careful! Once you type 'run', the code will execute and stop taking input.\n");

    while (true) {
        // Take input line by line
        char input_line[256];  // Buffer to hold each line of code

        fgets(input_line, sizeof(input_line), stdin);  // Get one line of input

        // Check if user typed "run" to break out of the loop
        if (strcmp(input_line, "run\n") == 0) {
            break;
        }
        
        // Ensure the buffer is large enough, resize if needed
        if (index + strlen(input_line) >= buffer_size) {
            buffer_size *= 2;
            code = realloc(code, buffer_size);
            if (code == NULL) {
                printf("Memory reallocation failed.\n");
                fclose(fl);
                return 1;
            }
        }

        // Append the input line to the code buffer
        strcat(code, input_line);
        index += strlen(input_line);

        // Write the input line to the file
        fprintf(fl, "%s", input_line);
    }

    fclose(fl); // Close the file after writing
    printf("        OUTPUT OF PYTHON CODE      ");
    printf("\n=======================================================================================================================\n\n");

    // Execute the Python script
    int result = system("python newfile.py"); // Or "python3" based on your system


    printf("\n=======================================================================================================================\n\n");

    free(code); // Free dynamically allocated memory
    return 0;
}
