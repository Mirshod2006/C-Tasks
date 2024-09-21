#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void giveNewLine(char *arr)
{
    int n = strlen(arr);
    char text[100];
    for(int i = 0;i<n;i++){

        if(isspace(arr[i])){
            printf("\n");
        }else{
            printf("%c",arr[i]);
        }
    }
}

int main()
{
    char gap[100];
    printf("Bironta gap kiriting : ");
    scanf("%[^\n]s", gap);
    puts(gap);
    int n = strlen(gap);
    printf("Length of Gap:%d\n", n);
    giveNewLine(gap);
    return 0;
}