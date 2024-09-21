#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Fruit
{
    char name[20];
    char type[20];
    int price;
};
void input(struct Fruit ob[],int n){
    puts("Mevalar haqida ma'lumotni kiriting:");
    for(int i=0;i<n;i++){
        printf("%d-meva\n",i+1);
        printf("Mevaning nomi: ");scanf("%s",ob[i].name);
        printf("Mevaning turi: ");scanf("%s",ob[i].type);
        printf("Mevaning narxi: ");scanf("%d",ob[i].price);
    }
}
void show(struct Fruit ob[],int n){
    printf('\n');
    printf("###########################################################################");
    puts("Mevalar haqida ma'lumotlar:");
    for(int i=0;i<n;i++){
        printf("%d-meva\n",i+1);
        printf("Mevaning nomi: %s\n",ob[i].name);
        printf("Mevaning turi: %s\n",ob[i].type);
        printf("Mevaning narxi: %d\n",ob[i].price);
    }
}

int main(){
    struct Fruit str[100];
    int num;
    printf("Enter num of Fruits:");scanf("%d",&num);
    
    return 0;
}