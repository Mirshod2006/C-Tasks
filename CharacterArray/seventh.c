#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char gap[500];

    printf("So'zlar qatori kiriting: ");
    scanf("%[^\n]s", gap);
    puts(gap);
    int n = strlen(gap);
    int k = 0;
    int j = 0;
    int l = 0;
   for(int i = 0; i<n;i++){
    if(isspace(gap[i])){
        k++;
    }
    else if(isalnum(gap[i])){
        j++;
    }
    else if(isalpha(gap[i])){
        l++;
    }
   }
   printf("Steps belgilar soni: %dta",(n-k-l-j));
    return 0;
}