#include <stdio.h>

#define MAX_SIZE 1000

int main()
{
    printf("문자열입력 : ");
    char str_a[MAX_SIZE];
    scanf("%s", &str_a);

    int length = 0;
    while (str_a[length] != '\0')
    {
        length++;
    }
    
    char str_b[MAX_SIZE];
    for (int i = 0; i < length; i++)
    {
        str_b[length-1-i] = str_a[i];
    }

    printf("str_a = %s\n", str_a);
    printf("str_b = %s\n", str_b);
    
    return 0;
}