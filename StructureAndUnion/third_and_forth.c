#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

struct Airport{
    char takeOnCity[50];
    char takeOffCity[50];
    int hour;
    char plane_type[30];
    char date[20];  
};
void getAirport(struct Airport std[],int n){
    for(int i=0;i<n;i++){
        printf("%d-airport\n",i+1);
        printf("Take on City: ");scanf("%s",std[i].takeOnCity);
        printf("Take Off City: ");scanf("%s",std[i].takeOffCity);
        printf("Flying Hour: ");scanf("%d",std[i].hour);
        printf("Flying date: "); scanf("%s",std[i].date);
        printf("Plane type: "); scanf("%s",std[i].plane_type);
    }
}
void showBySeason(struct Airport std[],int n){
    double sum = 0.0;
    for(int i=0;i<n;i++){
        tolower(std[i].date);
        int len = strlen(std[i].date);
        for(int j=0;j<len-2;j++){
            if((std[i].date[j]=='j'&&std[i].date[j+1]=='u'&&std[i].date[j+2]=='n')||(std[i].date[j]=='j'&&std[i].date[j+1]=='u'&&std[i].date[j+2]=='l')||
            (std[i].date[j]=='a'&&std[i].date[j+1]=='u'&&std[i].date[j+2]=='g')){
                printf("%d-student\n",i+1);
                printf("Take on City: %s\n",std[i].takeOnCity);
                printf("Take off City: %s\n",std[i].takeOffCity);
                printf("Flying Hour: %d\n",std[i].hour);
                printf("Flying date: %s\n",std[i].date);
                printf("Plane type: %s\n",std[i].plane_type);
            }
        }
    }
}
void showByHour(struct Airport std[],int n){
    for(int i=0;i<n;i++){
            if(std[i].hour>2 && std[i].hour<3 && std[i].takeOffCity=="Toshkent"){
                printf("%d-student\n",i+1);
                printf("Take on City: %s\n",std[i].takeOnCity);
                printf("Take off City: %s\n",std[i].takeOffCity);
                printf("Flying Hour: %d\n",std[i].hour);
                printf("Flying date: %s\n",std[i].date);
                printf("Plane type: %s\n",std[i].plane_type);
            }
    }
}
int main(){
    struct Airport airport1[30];
     int n;
     printf("Enter number of students:");scanf("%d",&n);
     getAirport(airport1,n);
     showBySeason(airport1,n);
     showByHour(airport1,n);
    return 0;
}