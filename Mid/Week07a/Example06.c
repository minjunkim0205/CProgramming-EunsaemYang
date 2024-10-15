#include <stdio.h>

int main()
{
    /*Input*/
    char str[50];
    char *p;
    p = str;
    do
    {
        printf("문자열 입력 : ");
        fgets(p, sizeof(str), stdin);
        /*Solve*/
        int length = 0;
        while (*(p + length) != '\n')
        {
            length++;
        }
        /*Output*/
        if(*(p+0) != '\n')
        {
            printf("\t입력된 문자열 길이 = %d\n", length);
        }
    } while (*(p+0) != '\n');
    
    return 0;
}