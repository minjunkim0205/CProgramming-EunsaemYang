#include <stdio.h>

int main()
{
    char c1, c2;
    c1 = '1'; c2 = 1;
    printf("c1 = %c, c2 = %c\n", c1, c2);
    /*
    1 과 '1'의 차이
    a) 1은 정수 1을 뜻함.
    b) '1'은 문자'1'을 뜻해 아스키 코드로 변환됩니다.
    */
    return 0;
}