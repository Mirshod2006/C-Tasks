#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char matn[30] = "Hello guys!What's up!";
    char name[10] = "Mirshod";
    strcpy(matn+6,name);
    puts(matn);
    char name1[10] = "Dilshodbek";
    strcpy(matn+6,name1);
    puts(matn);
    char name2[10] = "Shodmonbek";
    strncpy(matn+6,name2,7);
    puts(matn);
    char name3[10] = "Shohruhjon";
    strncpy(matn+6,name3,7);
    puts(matn);

    strcat(matn,name);
    puts(matn);
    strcat(matn,name1);
    puts(matn);
    strcat(matn,name2);
    puts(matn);
    strncat(matn,name1,7);
    puts(matn);
    return 0;
}