#include <stdio.h>

int main()
{
    /*Input*/
    char data[2][100];
    char *p[2];
    p[0] = data[0];
    p[1] = data[1];
    do
    {
        printf("문자열 입력 : ");
        fgets(p[0], sizeof(p[0])/sizeof(char), stdin);
        if(*p[0] != '\n'){
            printf("문자열 입력 : ");
            fgets(p[1], sizeof(p[1])/sizeof(char), stdin);
            
        }
    } while (*p[0] != '\n');

    return 0;
}
