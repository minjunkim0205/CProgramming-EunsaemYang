#include <stdio.h>

int main(){
    char ch;
    ch = getchar();

    // printf("8진수 = 0%o, 10진수 = %d, 16진수 = 0x%x\n", ch, ch, ch);
    printf("8진수 = %#o, 10진수 = %d, 16진수 = %#x\n", ch, ch, ch);

    return 0;
}