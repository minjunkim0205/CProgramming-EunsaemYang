#include <stdio.h>

int main()
{
    printf("정수를 입력하세요 >> ");
    int n; scanf("%d", &n);

    printf("2배 : %d\n", (n<<1));
    printf("4배 : %d\n", (n<<2));
    printf("8배 : %d\n", (n<<3));

    return 0;
}