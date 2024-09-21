#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("binaryfile.bin","wb");
    int numbers[10] ={1,2,3,4,5,6,7,8,9,10};
    fwrite(numbers,sizeof*numbers,10,fp);
    fclose(fp);
    fp=fopen("binaryfile.bin","rb");
    int num[10];
    fread(num,sizeof*num,10,fp);
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
    puts("");
    return 0;
}