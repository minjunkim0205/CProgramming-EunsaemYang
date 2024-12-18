#include <stdio.h>

int main() {
    double doubles[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // 파일 열어서(쓰기 모드)
    FILE *file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/Example07_doubles.data", "w");
    if (file == NULL) {
        perror("Example07_doubles.data 열기 실패");
        return 1;
    }
    printf("Example07_doubles.data를 열었습니다.\n");
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%.6f ", doubles[i]);
    }
    fclose(file);

    // 파일을 열어서 (읽기 모드)
    file = fopen("C:/Users Files/mjk/Coding/Projects/CProgramming-EunsaemYang/Final/Week14a/Example07_doubles.data", "r");
    if (file == NULL) {
        perror("Example07_doubles.data 열기 실패");
        return 1;
    }
    printf("doubles.data 파일에서 읽은 배열 내용: ");
    double read_value;
    while (fscanf(file, "%lf", &read_value) != EOF) {
        printf("%.6f ", read_value);
    }
    fclose(file);
    printf("\n");   

    return 0;
}
