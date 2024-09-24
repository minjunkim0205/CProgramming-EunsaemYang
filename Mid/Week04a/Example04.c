#include <stdio.h>

int myCharToInt()
{
    printf("숫자를 입력하세요 >> ");
    int n; scanf("%c", &n);
    while (getchar() != '\n');
    return ((0 <= (n - '0') && (n - '0') <= 9) ? (n - '0') : 1);
}

int main()
{
    int a = myCharToInt();
    int b = myCharToInt();
    printf("두 수의 곱은 : %d\n", (a * b));

    return 0;
}