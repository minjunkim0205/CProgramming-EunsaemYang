#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int year;
    int month;
    int day;
};
typedef struct Date date;

struct Fruit
{
    char name[50];
    int price;
    date expire;
    char discarded;
};
typedef struct Fruit fruit;

int convDateF(const char *str, const int index) // index >> year:0, month:1, day:2
{
    int num = atoi(str);
    if (index == 0)
    {
        return (num / 10000);
    }
    else if (index == 1)
    {
        return ((num / 100) % 100);
    }
    else if (index == 2)
    {
        return (num % 100);
    }
    return -1;
}

void printFruit(const fruit *data){
    printf("name = %s, ", data->name);
    printf("price = %d, ", data->price);
    printf("expire.year = %d, ", data->expire.year);
    printf("expire.month = %d, ", data->expire.month);
    printf("expire.day = %d, ", data->expire.day);
    printf("throw = %c", data->discarded);
}

int main()
{
    fruit store[5] = {
        {"apple", 500, {2024, 3, 1}, 'n'},
        {"banana", 500, {2024, 3, 3}, 'n'},
        {"orange", 500, {2025, 8, 1}, 'y'},
        {"melon", 500, {2025, 11, 11}, 'n'},
        {"mango", 500, {2025, 12, 25}, 'n'}
    };
    fruit *p = store;

    for (int i = 0; i < 5; i++)
    {
        printf("%d)", i);
        printFruit((p+i));
        printf("\n");
    }

    return 0;
}