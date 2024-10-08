#include <stdio.h>

#define MAX_SIZE 1000

int main()
{
    char str[MAX_SIZE] = "none";
    while (str[0]!='\0')
    {
        printf("문자열입력 : ");
        gets(str);
        int length = 0;
        while(str[length]) 
        {
            length++;
        }
        if(length)
        {
            printf("\t입력된 문자열의 길이 = %d\n", length);
        }
    }
    
    return 0;
}