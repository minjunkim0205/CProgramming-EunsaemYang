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

/* Main */
int main() {
    fruit any = {"apple", 500, {2020, 9, 1}, 'n'};

    return 0;
}
