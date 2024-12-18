#include <stdio.h>
#include <string.h>

int main()
{
    while (1)
    {
        /*Input*/
        char input_data[2][100];
        char *p[2];
        p[0] = input_data[0];
        p[1] = input_data[1];

        printf("문자열입력: ");
        fgets(p[0], sizeof(p[0]), stdin);
        p[0][strlen(p[0]) - 1] = '\0';

        if (*(p[0]) == '\0')
        {
            break;
        }

        printf("문자열입력: ");
        fgets(p[1], sizeof(p[1]), stdin);
        p[1][strlen(p[1]) - 1] = '\0';
        /*Solve, Output*/
        if (strcmp(p[0], p[1]) == 0)
        {
            printf("%s, %s, 같음.\n", p[0], p[1]);
        }
        else
        {
            printf("%s, %s, 다름.\n", p[0], p[1]);
        }
    }
    return 0;
}
