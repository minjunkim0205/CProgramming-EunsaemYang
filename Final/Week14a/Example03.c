#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/Example03_chars.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("문자 입력('\\n' 이면 종료): \n");
    while (1) {
        char temp[100];
        fgets(temp, sizeof(temp), stdin);
        if (temp[0] == '\n' || temp[0] == 'q') {
            break;
        }
        fputs(temp, file);
    }

    fclose(file);
    printf("Example03_chars.txt 파일에 저장했습니다.\n");

    return 0;
}
