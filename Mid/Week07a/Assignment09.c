#include <stdio.h>

int main() {
    char str[3][100];

    printf("str[0] 문자열 입력 : ");
    fgets(str[0], 100, stdin);
    printf("str[1] 문자열 입력 : ");
    fgets(str[1], 100, stdin);

    int i = 0, j = 0;
    while (str[0][i] != '\n') {
        str[2][i] = str[0][i];
        i++;
    }
    while (str[1][j] != '\n') {
        str[2][i] = str[1][j];
        i++;
        j++;
    }
    str[2][i] = '\0';

    printf("str[2] = %s\n", str[2]);

    return 0;
}
