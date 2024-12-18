#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};
typedef struct Date date;

struct Fruit
{
    char *name;
    int price;
    date expire;
    char throw;
};
typedef struct Fruit fruit;

int main(){
    fruit test_fruit;
    test_fruit.name = "idiot";
    test_fruit.price = 12300;
    test_fruit.expire.year = 2024;
    test_fruit.expire.month = 12;
    test_fruit.expire.day = 19;
    test_fruit.throw = 'y';

    return 0;
}