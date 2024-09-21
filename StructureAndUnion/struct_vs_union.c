#include <stdio.h>

struct Structura
{
    int num1;
    double num2;
    char sign;
}T1;
union Unionbek
{
    int num1;
    double num2;
    char sign;
}T2;
int main(){
    int num;
    printf("Size of struct:%lu\n",sizeof(T1));
    printf("Size of union:%lu",sizeof(T2));
     return 0;
}
/* this is for struct
(****)**** (********) (*)*******
*/
/* this is for union
(****)**** or (********) or (*)*******
size will be allocated one by one assigned and removed
*/