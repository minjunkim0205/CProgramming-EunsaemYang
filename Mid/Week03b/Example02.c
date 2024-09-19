#include <stdio.h>

int main(){
    int i1 = ('a'-'A');
    int i2 = ('0'-'1');

    printf("'a' - 'A' = %d\n", i1);
    printf("'0' - '1' = %d\n", i2);
    
    return 0;
}