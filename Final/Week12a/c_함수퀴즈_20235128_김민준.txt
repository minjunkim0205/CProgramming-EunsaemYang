#include <stdio.h>
#include <string.h>

int mycount(const char *s, char c) {
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return -1;
    }

    const char *str = argv[1];
    char c = argv[2][0];
    int count = mycount(str, c);

    printf("\"%s\"에서 '%c'는 %d개입니다.\n", str, c, count);
    return 0;
}
