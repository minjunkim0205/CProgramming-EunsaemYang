#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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

/* Function to compare two dates */
int is_expired(date current, date expire)
{
    if (expire.year < current.year)
    {
        return 1;
    }
    else if (expire.year == current.year && expire.month < current.month)
    {
        return 1;
    }
    else if (expire.year == current.year && expire.month == current.month && expire.day < current.day)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* Main */
int main()
{
    // fruit 구조체 배열 선언 및 초기화
    fruit store[5] = {
        {"apple", 500, {2024, 3, 1}, 'n'},
        {"banana", 500, {2024, 3, 3}, 'n'},
        {"orange", 500, {2025, 8, 1}, 'n'},
        {"melon", 500, {2025, 11, 11}, 'n'},
        {"mango", 500, {2025, 12, 25}, 'n'}
    };

    time_t t = time(NULL);
    struct tm today = *localtime(&t);
    date current_date = {today.tm_year + 1900, today.tm_mon + 1, today.tm_mday};

    printf("오늘 날짜는 %d년 %d월 %d일 입니다.\n", current_date.year, current_date.month, current_date.day);

    for (int i = 0; i < 5; i++)
    {
        if (is_expired(current_date, store[i].expire))
        {
            store[i].discarded = 'y';
            printf("%d)", i);
            printf("name=%s, ", store[i].name);
            printf("price=%d, ", store[i].price);
            printf("year=%d, ", store[i].expire.year);
            printf("month=%d, ", store[i].expire.month);
            printf("day=%d, ", store[i].expire.day);
            printf("throw=%c, ", store[i].discarded);
            printf("\n");
        }
    }

    return 0;
}
