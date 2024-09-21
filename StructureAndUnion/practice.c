#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct Borjomi
{
    char released[20];
    char expiry[20];
    int price;
    char name[30];
    char country[30];
};
struct Phone
{
    char name[30];
    int price;
    char manufactured[20];
    int memory;
    int ram;
}phone[100];

int main(){
    struct Borjomi water1 ={"2024.05.30","2025.05.30",10000,"Borjomi 0.5 sparking water"};
    printf("Name of the water:%s\n",water1.name);
    printf("Released date of the water:%s\n",water1.released);
    printf("Expiration date of the water:%s\n",water1.expiry);
    printf("Cost of the water:%d\n",water1.price);
    // Explicitly declaring is not nesseccerary
    // We can put value to its variables after initializing object also
    // with strcpy() and scanf();
    struct Borjomi water2;
    strcpy(water2.name,"Borjomi 0.5 still water");
    printf("Enter expiration date: ");
    scanf("%s",&water2.expiry);
    getchar();
    printf("Enter released date: ");
    scanf("%s",&water2.released);
    getchar();
    printf("Enter the price: ");
    scanf("%d",&water2.price);
    return 0;
}