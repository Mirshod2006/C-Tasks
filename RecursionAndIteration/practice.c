#include <stdio.h>
#include <stdlib.h>

int sum1(int n){ // iterative approach
    int s = 0;
    for (int i = 1; i <= n; i++){
        s += i;
    }
    return s;
}
int sum2(int n){
    if(n==0){
        return 0;
    }else if(n>0){
        return n + sum2(n-1);
    }
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("sum1=%i\n",sum1(num));
    printf("sum2=%i\n",sum2(num));
}