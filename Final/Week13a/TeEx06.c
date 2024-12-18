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

void printFruit(const fruit *data, const char *name)
{
    printf("%s.name = %s\n", name, data->name);
    printf("%s.price = %d\n", name, data->price);
    printf("%s.expire.year = %d\n", name, data->expire.year);
    printf("%s.expire.month = %d\n", name, data->expire.month);
    printf("%s.expire.day = %d\n", name, data->expire.day);
    printf("%s.throw = %c\n", name, data->discarded);
}

int main()
{
    fruit any;
    char temp[50];
    printf("과일이름 : ");
    fgets(any.name, sizeof(any.name), stdin);
    printf("가격 : ");
    fgets(temp, sizeof(temp), stdin);
    any.price = atoi(temp);
    printf("만기일 : ");
    fgets(temp, sizeof(temp), stdin);
    any.expire.year = convDateF(temp, 0);
    any.expire.month = convDateF(temp, 1);
    any.expire.day = convDateF(temp, 2);

    printFruit(&any, "any");

    return 0;
}