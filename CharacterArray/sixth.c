#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char gap[500];

    char text[50];

    printf("So'zlar qatori kiriting: ");
    scanf("%[^\n]s", gap);
    puts(gap);
    int n = strlen(gap);
    int k = 4;
    int j = 0;
   for(int i = 0; i<n;i++){
    if(isspace(gap[i])||gap[i]=='\0'){
        k--;
    }
    if(k==0){
        puts(text);
        text[0] = '\0';
        k = 4;
        j=0;
    }
    if(k>0){
        text[j] = gap[i];
        j++;
    }
   }
   puts(text);
    return 0;
}