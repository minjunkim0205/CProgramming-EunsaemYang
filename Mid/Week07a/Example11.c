#include <stdio.h>

int main()
{
    /*Input*/
    char data[2][100];
    printf("문자열 입력 : ");
    fgets(data[0], sizeof(data[0])/sizeof(char), stdin);
    char *input = data[0];
    char *output = data[1];
    
    /*Solve*/
    int i = 0;
    while(input[i] != '\n')
    {
        output[i] = input[i] + ('A' - 'a'); 
        i++;
    }
    input[i] = '\0';
    output[i] = '\0';
    
    /*Output*/
    printf("str[0]=%s, str[1]=%s", input, output);

    return 0;
}
