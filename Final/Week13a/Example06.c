#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Struct */
typedef struct date {
    int year;
    int month;
    int day;
} date;

typedef struct fruit {
    char name[50];
    int price;
    date expire;
    char discarded;
} fruit;

/* Function */
int myblockcopy(const char *ymd, int start, int count) {
    char change[6];  // 널 문자 포함 최대 5자리 처리
    int i;
    for (i = 0; i < count; i++) {
        change[i] = ymd[start + i];
    }
    change[i] = '\0';  // 널 문자 추가
    return atoi(change);  // 문자열을 정수로 변환
}

/* Main */
int main() {
    fruit any;
    char ymd[10];

    printf("과일이름 : ");
    fgets(any.name, sizeof(any.name), stdin);
    any.name[strlen(any.name) - 1] = '\0';  // 개행 문자 제거

    printf("가격 : ");
    scanf("%d", &any.price);
    while (getchar() != '\n');  // 입력 버퍼 비우기

    printf("만기일 : ");
    fgets(ymd, sizeof(ymd), stdin);
    size_t len = strlen(ymd);
    if (ymd[len - 1] == '\n') {
        ymd[len - 1] = '\0';
    }

    any.expire.year = myblockcopy(ymd, 0, 4);
    any.expire.month = myblockcopy(ymd, 4, 2);
    any.expire.day = myblockcopy(ymd, 6, 2);
    any.discarded = 'n';

    printf("\nany.name = %s\n", any.name);
    printf("any.price = %d\n", any.price);
    printf("any.expire.year = %d\n", any.expire.year);
    printf("any.expire.month = %d\n", any.expire.month);
    printf("any.expire.day = %d\n", any.expire.day);
    printf("any.discarded = %c\n", any.discarded);

    return 0;
}
