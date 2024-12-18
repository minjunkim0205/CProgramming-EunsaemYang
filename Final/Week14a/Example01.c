#include <stdio.h>

int main() {
    FILE *file; // 파일 포인터

    // 파일 열기 (쓰기 모드)
    file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/Example01_chars.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("문자 입력('q' 이면 종료): \n");
    while (1) {
        char temp[10];
        fgets(temp, sizeof(temp), stdin);
        char ch = temp[0];
        if (ch == 'q') {
            break;
        }
        if (ch != '\n') {
            fputc(ch, file);
        }
    }

    fclose(file);
    printf("Example01_chars.txt 파일에 저장했습니다.\n");

    return 0;
}
