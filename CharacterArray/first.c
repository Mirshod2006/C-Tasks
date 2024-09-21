#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char surename[10] = "Hamroyev";
    char name[10] = "Mirshod";
    strncpy(surename,name+3,4);
    puts(surename);
    strncpy(name,surename+4,4);
    puts(name);
    return 0;
}