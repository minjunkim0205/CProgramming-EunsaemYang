#include <stdio.h>
#include <string.h>

/*Input*/
int main(int argc, char *argv[])
{
    /*Solve, Output*/
    if (argc == 2) // 프로그램이름, 인수
    { 
        const char *KOR[] = {"", "십", "백", "천", "만"};
        const char *NUM_KOR[] = {"영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};

        int length = strlen(argv[1]);
        printf("입력한 정수는 [ ");
        for (int i = 0; i < length; i++)
        {
            printf("%s", NUM_KOR[argv[1][i] - '0']);
            printf("%s", KOR[length - i - 1]);
            printf(" ");
        }
        printf("]입니다\n");
    }
    return 0;
}
