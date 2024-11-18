#include <stdio.h>
#include <string.h>

int mystrcmp(const char *str1, const char *str2) {
    if (strcmp(str1, str2) == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("사용법: ctest <문자열>\n");
        return 1;
    }

    char input[100];
    printf("문자열 입력: ");
    scanf("%99s", input);

    int result = mystrcmp(argv[1], input);

    if (result == 0) {
        printf("result = 0, 같다.\n");
    } else {
        printf("result = -1, 다르다.\n");
    }

    return 0;
}
