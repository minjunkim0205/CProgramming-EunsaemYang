#include <stdio.h>

int main()
{
    int i1 = ('a'-'A');
    int i2 = ('0'-'1');
    printf("'a' - 'A' = %d\n", i1);
    printf("'0' - '1' = %d\n", i2);
    /*
    a) 'a' - 'A' = 32의 이유는 
        'a'의 아스키 코드 097와 'A'의 아스키 코드 065의
        차를 뜻하기 때문에 32로 나온다.
    b) '0' - '1' = -1의 이유는
        '0'의 아스키 코드 048와 '1'의 아스키 코드 049의
        차를 뜻하기 때문에 -1로 나온다.
    */
    return 0;
}