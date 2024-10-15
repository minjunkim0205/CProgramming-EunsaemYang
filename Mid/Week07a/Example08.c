#include <stdio.h>

int main()
{
    /*Input*/
    char str_a[50], str_b[50];
    char *p_a, *p_b;
    p_a = str_a;
    p_b = str_b;
    printf("문자열 입력 : ");
    fgets(p_a, sizeof(str_a), stdin);
    printf("문자열 입력 : ");
    fgets(p_b, sizeof(str_b), stdin);
    /*Solve*/
    char str_ans[100];
    int index = 0;
    
    /*Output*/
    
    return 0;
}