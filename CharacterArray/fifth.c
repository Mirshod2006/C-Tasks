#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char gap[100];

    char tab[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char caps_lock[9] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    char shift[7] = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    printf("Bironta gap kiriting : ");
    scanf("%[^\n]s", gap);
    puts(gap);
    int n = strlen(gap);
    char text[100];
    int k = 0;
    for(int i = 0;i<n;i++){

        if(!ispunct(gap[i])){
            text[k] =tolower(gap[i]);
            k++;
        }
    }
    text[k]='\0';
    int len = strlen(text);
    for(int i = 0; i<len;i++){
        for(int j = 0;j<10;j++){
            if(text[i]==tab[j]){
                printf("Tab");
                break;
            }
        }
        for(int j = 0;j<9;j++){
            if(text[i]==caps_lock[j]){
                printf("CapsLock");
                break;
            }
        }
        for(int j = 0;j<7;j++){
            if(text[i]==shift[j]){
                printf("Shift");
                break;
            }
        }
    }
    return 0;
}