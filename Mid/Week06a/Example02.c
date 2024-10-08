#include <stdio.h>

int main()
{
    // A
    int a_num[5];
    int a_size = sizeof(a_num)/sizeof(int);
    printf("%d", a_size);
    // B
    int b_num[4][5];
    int b_size = sizeof(b_num)/sizeof(b_num[0]);
    printf("%d", b_size);
    // C
    double c_dou[] = {2.1, 3.7, 4.87, 5.89};
    // D
    char d_str[] = "coffee"; //"coffee\0";
    // E
    char e_str[3][5] = {"he", "his", "him"};

    return 0;
}