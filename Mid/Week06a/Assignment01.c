#include <stdio.h>

#define SIZE 4

int main()
{
    char str[SIZE];
    for(int i = 0; i < sizeof(str)/sizeof(char); i++)
    {
        /*
        printf("문자입력 : ");
        scanf("%c", &str[i]);
        while (getchar() != '\n');
        */
        printf("문자입력 : ");
        str[i] = getchar();
        while (getchar() != '\n');
    }
    printf("입력된 문자 = %s", str);

    return 0;
}