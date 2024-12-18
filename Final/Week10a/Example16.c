#include <stdio.h>
#include <string.h>

/*Input*/
const int argc = 2;
const char *argv[] = {"Example16Test", "apple"};

int mystrcmp(const char *str_a, const char *str_b)
{
    return (strcmp(str_a, str_b)?-1:0);
}
int main(int argc, char *argv[])
{
    if (argc == 2) // 프로그램, 인자
    {
        char str_input[100];
        fgets(str_input, sizeof(str_input), stdin);
        str_input[strlen(str_input)-1] = '\0';
        /*Solve*/
        int ans = mystrcmp(argv[1], str_input);
        /*Output*/
        printf("result = %d, %s.", ans, (ans==0?"같다":"다르다"));
    }
    return 0;
}