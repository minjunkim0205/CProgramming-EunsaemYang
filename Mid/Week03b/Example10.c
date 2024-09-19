#include <stdio.h>

int main(){
    char cha, chb;
    printf("숫자를 입력하세요 >> ");
    scanf("%c", &cha);

    while (getchar() != '\n'); // 입력 버퍼 지우기

    printf("숫자를 입력하세요 >> ");
    scanf("%c", &chb);

    printf("두 수의 합은 : %d", (cha+chb-'0'*2));
    
    return 0;
}