#include <stdio.h>
#include <stdbool.h>

int main(){
    // int apple = 25;
    // int banana = 22;
    // int both = apple + banana;
    // printf("%i+%i = %i\n",apple,banana , both);
    // int ananas, kiwi;
    // scanf("%i%i",&ananas,&kiwi);
    // printf("%i+%i+%i+%i = %i",apple,banana,kiwi,ananas,both+kiwi+ananas);
    // bool isCostly = true;
    // int a = 10;
    // int b = 12;
    // int c = 21;
    // int d = b;
    // int e = c;
    // b = a;
    // c = d;
    // a = e;
    // printf("%i, %i, %i",a,b,c);
    int son;
    int sum = 0;
    int num = 10;
    int reverse  = 0;
    scanf("%i",&son);
    while(son > 0){
        int remain = son%num;
      sum +=remain;
      son /=10;
      reverse = reverse*10+remain;
    }
    printf("sum is :%i\n",sum);
    printf("reverse is :%i",reverse);
    return 0;
}
