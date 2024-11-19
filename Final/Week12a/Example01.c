#include <stdio.h>
#include <string.h>

/*Struct*/
/*
typedef struct book
{
    char title[50];
    int price;
}Book;
*/
struct book
{
    char title[50];
    int price;
};
typedef struct book Book;


/*Main*/
int main(){
    // 01
    printf("//구조체 사용\n");
    Book b1;
    printf("책 제목 : ");
    fgets(b1.title, sizeof(b1.title), stdin);
    b1.title[strlen(b1.title) - 1] = '\0';
    printf("책 가격 : ");
    scanf("%d", &b1.price);
    printf("b1.title = %s, b1.price = %d\n", b1.title, b1.price);
    printf("\n");

    // 02
    

    return 0;
}