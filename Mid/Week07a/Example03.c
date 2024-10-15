#include <stdio.h>

int main()
{
    /*Input*/
    int from[4];
    int *p;
    p = from;

    for (int i = 0; i < sizeof(from) / sizeof(int); i++)
    {
        printf("정수 입력 : ");
        scanf("%d", p+i);
        //scanf("%d", *(p)[i]);
    }
    /*Solve*/
    int sum = *(p), max = *(p), min = *(p);
    for(int i = 1; i < sizeof(from) / sizeof(int); i++)
    {
        sum += *(p+i);
        max = *(p+i)>max ? *(p+i) : max;
        min = *(p+i)<min ? *(p+i) : min;
    }
    /*Output*/
    printf("sum : %d\nmax : %d\nmin : %d", sum, max, min);
    return 0;
}