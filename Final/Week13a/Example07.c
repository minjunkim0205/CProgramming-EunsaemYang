#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Struct */
typedef struct date
{
    int year;
    int month;
    int day;
} date;

typedef struct fruit
{
    char name[50];
    int price;
    date expire;
    char discarded;
} fruit;

/* Main */
int main()
{
    // fruit 구조체 배열 선언 및 초기화
    fruit store[5] = {
        {"apple", 500, {2024, 3, 1}, 'n'},
        {"banana", 500, {2024, 3, 3}, 'n'},
        {"orange", 500, {2025, 8, 1}, 'n'},
        {"melon", 500, {2025, 11, 11}, 'n'},
        {"mango", 500, {2025, 12, 25}, 'n'}};

    fruit *ptr = store;
    for (int i = 0; i < 5; i++)
    {
        printf("%d)", i);
        printf("name=%s, ", (ptr+i)->name);
        printf("price=%d, ", (ptr+i)->price);
        printf("year=%d, ", (ptr+i)->expire.year);
        printf("month=%d, ", (ptr+i)->expire.month);
        printf("day=%d, ", (ptr+i)->expire.day);
        printf("throw=%c, ", (ptr+i)->discarded);
        printf("\n");
    }

    return 0;
}