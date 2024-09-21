#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));
    char* expression = (char *)malloc(100*sizeof(char));
    printf("Input any math expression:");scanf("%s",expression);
    int plus =0;
    int minus=0;
    int mul=0;
    int div=0;
    int brace1=0;
    int brace2 = 0;
    for(int i=0;i<strlen(expression);i++){
        if(expression[i]=='+'){
            plus++;
        }
        if(expression[i]=='-'){
            minus++;
        }
        if(expression[i]=='*'){
            mul++;
        }
        if(expression[i]=='/'){
            div++;
        }
        if(expression[i]=='('){
            brace1++;
        }
        if(expression[i]==')' && brace1%2==1){
            brace2++;
        }
    }
    printf("%d '+' signs, ",plus);
    printf("%d '-' signs, ",minus);
    printf("%d '*' signs, ",mul);
    printf("%d '/' signs, ",div);
    printf("%d '()' brace ",brace2);
    free(expression);

    return 0;
}
