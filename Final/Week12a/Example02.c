#include <stdio.h>
#include <string.h>

/*Struct*/
typedef struct book
{
    char title[50];
    int price;
}Book;

/*Main*/
int main(){
    Book books[3];
    for (int i = 0; i < sizeof(books)/sizeof(Book); i++)
    {
        printf("%d) 책 제목 : ", i);
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strlen(books[i].title)-1] = '\0';

        printf("%d) 책 가격 : ", i);
        scanf("%d", &books[i].price);
        while (getchar() != '\n');
    }
    
    for (int i = 0; i < sizeof(books)/sizeof(Book); i++)
    {
        printf("books[%d].title = %s, books[%d].price = %d\n", i, books[i].title, i, books[i].price);
    }
     
    return 0;
}