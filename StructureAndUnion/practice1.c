#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct Phone
{
    char name[30];
    int price;
    char manufactured[20];
    int memory;
    int ram;
}phone[100];

int main(){
    int n;
    printf("Enter number of Phones: ");
    scanf("%i",n);
    for(int i=0;i<n;i++){
        printf("Enter name of Phone %i: ",i+1);
        printf("Phone name: ");scanf("%s",phone[i].name);
        printf("Phone cost: ");scanf("%i",&phone[i].price);
        printf("Phone manufactured date: ");scanf("%s",phone[i].manufactured);
        printf("Phone Memory: ");scanf("%i",&phone[i].memory);
        printf("Phone Ram: ");scanf("%i",&phone[i].ram);
    }
    return 0;
}