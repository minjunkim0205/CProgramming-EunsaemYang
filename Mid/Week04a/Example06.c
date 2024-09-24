#include <stdio.h>

int main()
{
    printf("정수를 입력하세요 >> ");
    int n; scanf("%d", &n);

    printf("%s", (((n>>1)>10) ? "OK" : "NOK"));

    return 0;
}