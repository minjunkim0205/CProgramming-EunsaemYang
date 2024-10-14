#include <stdio.h>

#define MAX_STR_LEN 100
#define MAX_STR_COUNT 2

int main() {
    char strings[2][MAX_STR_LEN];
    int i, j;
    int isEqual;
    while (1) {
        for (i = 0; i < MAX_STR_COUNT; i++) {
            printf("문자열입력 : ");
            fgets(strings[i], MAX_STR_LEN, stdin);
            if (strings[i][0] == '\n') {
                return 0;
            }
            for (j = 0; strings[i][j] != '\0'; j++) {
                if (strings[i][j] == '\n') {
                    strings[i][j] = '\0';
                    break;
                }
            }
        }
        isEqual = 1;
        for (j = 0; ; j++) {
            if (strings[0][j] == '\0' && strings[1][j] == '\0') {
                break; 
            }
            if (strings[0][j] != strings[1][j]) {
                isEqual = 0;
                break;
            }
        }
        if (isEqual) {
            printf("%s, %s, 같음.\n", strings[0], strings[1]);
        } else {
            printf("%s, %s, 다름.\n", strings[0], strings[1]);
        }
    }

    return 0;
}
