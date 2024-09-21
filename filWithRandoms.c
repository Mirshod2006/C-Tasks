#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n;
    printf("Enter number of elements : ");
    scanf("%i",&n);
    int num[n];
    for(int i=0;i<n;i++){
        num[i] = rand();
        printf("%i ",num[i]);
    }
    return 0;
}
