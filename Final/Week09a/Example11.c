#include <stdio.h>
#include <string.h>

int main()
{
    /*Input*/
    char str_inputs[2][100];
    char *p[2];
    p[0] = str_inputs[0];
    p[1] = str_inputs[1];
    printf("문자열입력 : ");
    fgets(p[0], sizeof(p[0]), stdin);
    p[0][strlen(p[0])-1] = '\0';
    /*Solve*/
    for (int i = 0; i < strlen(p[0]); i++)
    {
        *(p[1]+i) = *(p[0]+i) + ('A'-'a');
    }
    /*Output*/
    printf("str[0]=%s, str[1]=%s", p[0], p[1]);
    return 0;
}