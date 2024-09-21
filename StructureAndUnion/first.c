#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    double stipend;
    int scores[6];
};
bool thisStudent(int num[]){
    int n = strlen(num);
    int container=0;
    for(int i =0;i<n;i++){
        container +=num[i];
    }
    if(container/n==4){
        return true;
    }
    return false;
}
void getStudents(struct Student std[],int n){
    for(int i=0;i<n;i++){
        printf("%d-student\n",i+1);
        printf("Student name: ");scanf("%s",std[i].name);
        printf("Student Age: ");scanf("%i",std[i].age);
        printf("Student stipend: ");scanf("%d",std[i].stipend);
        printf("Enter scores of %i-student!",i+1);
        for(int j=0;j<5;j++){
            printf("%i-subject score:",j+1); scanf("%d",std[i].scores[j]);
        }
    }
}
void showThem(struct Student std[],int n){
    for(int i=0;i<n;i++){
        if(thisStudent(std[i].scores)){
            printf("%d-student\n",i+1);
            printf("Student name: %s\n",std[i].name);
            printf("Student age: %d\n",std[i].age);
            printf("Student stipend: %d\n",std[i].stipend);
        }
    }
}
int main(){
    struct Student student1[30];
     int n;
     printf("Enter number of students:");scanf("%d",&n);
    getStudents(student1,n);
    showThem(student1,n);
    return 0;
}