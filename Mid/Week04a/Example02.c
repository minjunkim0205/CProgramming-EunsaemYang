#include <stdio.h>

int main()
{
    printf("정수 두 개를 입력하세요 >> ");
    int b, s; scanf("%d %d", &b, &s);
    if (s > b) // Swap
    {
        int temp = b;   
        b = s;
        s = temp;
    }
    printf("큰수 : %d\n작은 수 : %d\n", b, s);
    printf("큰 수를 작은 수로 나눈 몫과 나머지 : %d, %d", (b / s), (b % s));
    return 0;
}