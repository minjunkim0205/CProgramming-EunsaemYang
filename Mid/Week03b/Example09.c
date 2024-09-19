#include <stdio.h>

int main(){
    char cha, chb;
    printf("문자를 입력하세요 >> ");
    scanf("%c", &cha);

    while (getchar() != '\n'); // 입력 버퍼 지우기

    printf("문자를 입력하세요 >> ");
    scanf("%c", &chb);

    printf("입력 받은 문자는 %c, %c", cha, chb);
    return 0;
}