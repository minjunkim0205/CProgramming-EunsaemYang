#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main()
{
    char str[MAX_SIZE];
    do
    {
        printf("문자열입력 : ");
        fgets(str, MAX_SIZE, stdin);
        if (str[0] != '\0')
        {
            char c;
            printf("문자입력 : ");
            fgets(c, 2, stdin);

            int count = 0;
            for (int i = 0; str[i]; i++)
            {
                if (str[i] == c)
                {
                    count++;
                }
            }
            printf("\t%s 에서 %c 는 %d 개\n", str, c, count);
        }
    } while (str[0] != '\0');

    return 0;
}
