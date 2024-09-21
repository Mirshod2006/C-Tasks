#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int removeDublicates(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        arr[i]=temp[i];
    }
    return j;
}

int main()
{
    char gap[100];
    printf("Bironta gap kiriting : ");
    scanf("%[^\n]s", gap);
    puts(gap);
    int n = strlen(gap);
    printf("Length of Gap:%d", n);
    int ver = 0;
    int A[100];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (ver == 1)
        {
            printf(",\n");
        }
        for (int j = 0; j < n; j++)
        {
            if (tolower(gap[i]) == tolower(gap[j]))
            {
                count++;
                if (count == 1)
                {
                    A[index] = j;
                }
            }
        }
        ver = 1;
        printf("'%c' %ita", gap[i], count);
    }
    return 0;
}