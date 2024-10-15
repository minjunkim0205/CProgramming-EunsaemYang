#include <stdio.h>

int main()
{
    /*Input*/
    char str[50];
    char *p;
    p = str;

    printf("문자열 입력 : ");
    scanf("%s", p);
    /*Solve*/
    int length = 0;
    while (*(p + length) != '\0')
    {
        length++;
    }
    /*Output*/
    printf("입력된 문자열 길이 = %d\n", length);

    return 0;
}