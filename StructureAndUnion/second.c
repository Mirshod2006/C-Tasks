#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    double stipend;
    int course;
};
void getStudents(struct Student std[],int n){
    for(int i=0;i<n;i++){
        printf("%d-Student\n",i+1);
        printf("Student name: ");scanf("%s",std[i].name);
        printf("Student Age: ");scanf("%i",std[i].age);
        printf("Student stipend: ");scanf("%d",std[i].stipend);
        printf("Student course: "); scanf("%i",std[i].course);
    }
}
void showSum(struct Student std[],int n){
    double sum = 0.0;
    for(int i=0;i<n;i++){
        if(std[i].course==2){
            printf("For %i-student %d stipend is paid!",i+1,std[i].stipend);
            sum += std[i].stipend;
        }
    }
    printf("For all second course students, %d amount of stipend is paid!",sum);
}
int main(){
    struct Student student1[30];
     int n;
     printf("Enter number of students:");scanf("%d",&n);
    getStudents(student1,n);
    showSum(student1,n);
    return 0;
}